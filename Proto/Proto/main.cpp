#include<stdio.h>
#include "data.h"
#include "Request.h"
#include "Response.h"

void main()
{
	Request request;
	RequestMsg *pRequest;
	string output;
	Requestinfo info;
	info.cmd = 1;
	info.clientID = "13854188";
	info.seckeyID = "10086";
	info.sign = "hello";
	info.data = "world";

	//��ʼ��
	request.initMessage(&info);
	
	pRequest = (RequestMsg *)request.decodeMsg();

	//���л�
	pRequest->SerializeToString(&output);
	request.initMessage(output);
	cout << "���л�֮�������: " << request.encodeMsg() << endl;
	
	// �����л�
	// �������л�֮������� -> ��ԭ
	RequestMsg p;
	p.ParseFromString(request.encodeMsg());
	cout << "�������� : " << p.cmdtype() << endl
		<< "�ͻ��˱�� : " << p.clientid() << endl
		<< "�������˱��:" << p.serverid() << endl
		<< "ǩ��: " << p.sign() << endl
		<< "����: " << p.data() << endl;

	system("pause");
}