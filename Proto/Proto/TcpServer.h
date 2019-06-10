#pragma once
#include <iostream>
#include "TcpSocket.h"
using namespace std;

class TcpServer
{
public:
	TcpServer();
	int setListen(unsigned short port);
	TcpSocket *acceptConn(int timeout);
	~TcpServer();
private:
	int m_lfd;
};