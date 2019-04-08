//
//Client.h
//chatroom
//

#ifndef CHATROOM_CLIENT_H
#define CHATROOM_CLIENT_H

#include <string>
#include "Common.h"

using namespace std;

class Client {
public:
	Client();
	void connectServer();
	void closeClient();
	void start();
private:
	int sock;
	int pid;
	int epfd;
	int pipe_fd[2];
	
	bool isClientwork;
	char message[BUF_SIZE];
	struct sockaddr_in serverAddr;
};

#endif
