#include "TcpServer.h"
#include <winsock.h>

TcpServer::TcpServer()
{
	
}

// ���������׽���/��/����
int TcpServer::setListen(unsigned short port)
{
	////�����׽���
	//this->m_lfd = socket(AF_INET, SOCK_STREAM, 0);
	////��
	//sockaddr_in addr;
	//addr.sin_family = AF_INET;
	//addr.sin_port = htons(9999);
	//addr.sin_addr.s_addr = 0;
	//int err = bind(m_lfd, (sockaddr *)&addr, sizeof(addr));
	//if (err == -1)
	//{
	//	printf("error bind TcpServer : 18\n");
	//	return -1;
	//}
	////����
	//err = listen(m_lfd, 111);
	//if (err == -1)
	//{
	//	printf("error listen TcpServer : 25\n");
	//	return -1;
	//}
	return 0;
}

// �ȴ���������������
TcpSocket * TcpServer::acceptConn(int timeout)
{
	////�õ���ͨ�ŵ��ļ�������
	//sockaddr_in clientaddr[1024];
	//int size = sizeof(clientaddr)/sizeof(clientaddr[0]);
	//int connfd = accept(m_lfd, (sockaddr *)clientaddr, &size);

	////��ͨ�ŵ�fd -> ͨ�ŵ���
	//TcpSocket* socket = new TcpSocket(connfd);
	//return socket;
	return NULL;
}

TcpServer::~TcpServer()
{
	//closesocket(m_lfd);
}
