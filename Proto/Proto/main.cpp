#include<stdio.h>
#include "data.h"

void main()
{
	Request request;
	RequestMsg *pRequest;
	string output;

	//��ʼ��
	request.initMessage(1, "13854188", "10086", "hello" ,"world");
	request.initMessage("hello world");
	pRequest = (RequestMsg *)request.decodeMsg();

	//���л�
	pRequest->SerializeToString(&output);
	cout << "���л�֮�������: " << output << endl;
	
	// �����л�
	// �������л�֮������� -> ��ԭ
	RequestMsg p;
	p.ParseFromString(output);
	cout << "�������� : " << p.cmdtype() << endl
		<< "�ͻ��˱�� : " << p.clientid() << endl
		<< "�������˱��:" << p.serverid() << endl
		<< "ǩ��: " << p.sign() << endl
		<< "����: " << p.data() << endl
		<< "�ַ���: " << request.encodeMsg() << endl;

	system("pause");
}