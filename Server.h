//
//Server.h
//chatroom
//

#ifndef CHATROOM_SERVER_H
#define CHATROOM_SERVER_H

#include <string.h>
#include "Common.h"

using namespace std;

class Server {
public:
	Server();
	void init();
	void closeServer();
	void start();

private:
	int sendBroadcastMessage(int clientfd);
	struct sockaddr_in serverAddr;
	int listener;
	int epfd;
	list<int> clients_list;
};
#endif
