#include "TcpSocket.h"


TcpSocket::TcpSocket()
{

}

TcpSocket::TcpSocket(int connfd)
{

}
// ���ӷ����� 
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
