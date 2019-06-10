#include "Response.h"

//ResponseÀàÊµÏÖ
Response::Response()
{
}

Response::Response(string encstr)
{
	initMessage(encstr);
}

Response::Response(RespondInfo * info)
{
	initMessage(info);
}

void Response::initMessage(string encstr)
{
	this->m_encStr = encstr;
}

void Response::initMessage(RespondInfo * info)
{
	this->m_msg.set_rv(info->status); 
	this->m_msg.set_seckeyid(info->seckeyID);
	this->m_msg.set_clientid(info->clientID);
	this->m_msg.set_serverid(info->serverID);
	this->m_msg.set_data(info->data);
}

string Response::encodeMsg()
{
	return this->m_encStr;
}

void * Response::decodeMsg()
{
	return nullptr;
}

Response::~Response()
{
}
