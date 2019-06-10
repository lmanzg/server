#include "Request.h"

//RequestÀàÊµÏÖ
Request::Request()
{
}

Request::Request(string encstr)
{
	initMessage(encstr);
}

Request::Request(Requestinfo * info)
{
	initMessage(info);
}

void Request::initMessage(string encstr)
{
	this->m_encStr = encstr;
}

void Request::initMessage(Requestinfo * info)
{
	this->m_msg.set_cmdtype(info->cmd);
	this->m_msg.set_clientid(info->clientID);
	this->m_msg.set_serverid(info->seckeyID);
	this->m_msg.set_sign(info->sign);
	this->m_msg.set_data(info->data);
}

string Request::encodeMsg()
{
	return this->m_encStr;
}

void * Request::decodeMsg()
{
	return &this->m_msg;
}

Request::~Request()
{

}