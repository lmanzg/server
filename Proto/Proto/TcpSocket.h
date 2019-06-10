#pragma once
#include <iostream>

using namespace std;

class TcpSocket
{
public:
	TcpSocket();
	TcpSocket(int connfd);
	int connectToHost(string ip,unsigned short port,int timeout);
	int sendMsg(string data, int timeout);
	string recvMsg(int timeout);
	~TcpSocket();
private:
	int m_socket;
};