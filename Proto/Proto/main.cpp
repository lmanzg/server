#include<stdio.h>
#include "data.h"

void main()
{
	Request request;
	RequestMsg *pRequest;
	string output;

	//初始化
	request.initMessage(1, "13854188", "10086", "hello" ,"world");
	
	pRequest = (RequestMsg *)request.decodeMsg();

	//序列化
	pRequest->SerializeToString(&output);
	request.initMessage(output);
	cout << "序列化之后的数据: " << request.encodeMsg() << endl;
	
	// 反序列化
	// 解析序列化之后的数据 -> 还原
	RequestMsg p;
	p.ParseFromString(request.encodeMsg());
	cout << "报文类型 : " << p.cmdtype() << endl
		<< "客户端编号 : " << p.clientid() << endl
		<< "服务器端编号:" << p.serverid() << endl
		<< "签名: " << p.sign() << endl
		<< "数据: " << p.data() << endl;

	system("pause");
}