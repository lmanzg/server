#include "TcpSocket.h"


TcpSocket::TcpSocket()
{

}

TcpSocket::TcpSocket(int connfd)
{

}
// 连接服务器 
int TcpSocket::connectToHost(string ip, unsigned short port, int timeout)
{

	return 0;
}

int TcpSocket::sendMsg(string data, int timeout)
{
	return 0;
}

string TcpSocket::recvMsg(int timeout)
{
	return string();
}

TcpSocket::~TcpSocket()
{
}
