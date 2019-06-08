#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "RequestMsg.pb.h"
#include "RespondMsg.pb.h"

using namespace std;
using namespace requestMsg;
using namespace respondMsg;

class Codec
{
public:
	Codec();
	~Codec();
	string encodeMsg;
	void *decodeMsg;
};

class Request : public Codec
{
public:
	Request();
	Request(string encstr);
	Request(int cmd,string clientID, string seckeyID, string sign,string data);
	void initMessage(string encstr);
	void initMessage(int cmd, string clientID,string seckeyID, string sign, string data);
	string encodeMsg();
	void * decodeMsg();
	~Request();
private:
	string m_encStr;
	RequestMsg m_msg;
};

class Response :public Codec
{
public:
	Response();
	Response(string encstr);
	Response(int status, int seckeyID,string clientID, string serverID, string data);
	void initMessage(string encstr);
	void initMessage(int status, int seckeyID, string clientID, string serverID, string data);
	string encodeMsg();
	void * decodeMsg();
	~Response();
private:
	string m_encStr;
	RespondMsg m_msg;
};
