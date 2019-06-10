#pragma once
#include "data.h"

class RespondInfo
{
public:
	int status;
	int seckeyID;
	string clientID;
	string serverID;
	string data;
};

class Response :public Codec
{
public:
	Response();
	Response(string encstr);
	Response(RespondInfo * info);
	void initMessage(string encstr);
	void initMessage(RespondInfo * info);
	string encodeMsg();
	void * decodeMsg();
	~Response();
private:
	string m_encStr;
	RespondMsg m_msg;
};
