#pragma once
#include "data.h"

class Requestinfo
{
public:
	int cmd;
	string clientID;
	string seckeyID;
	string sign;
	string data;
};

class Request : public Codec
{
public:
	Request();
	Request(string encstr);
	Request(Requestinfo * info);
	void initMessage(string encstr);
	void initMessage(Requestinfo * info);
	string encodeMsg();
	void * decodeMsg();
	~Request();
private:
	string m_encStr;
	RequestMsg m_msg;
};