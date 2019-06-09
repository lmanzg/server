#include "data.h"

//Codec类实现
Codec::Codec()
{
}

Codec::~Codec()
{
}

string Codec::encodeMsg()
{
	return string();
}

void * Codec::decodeMsg()
{
	return nullptr;
}

//Request类实现
Request::Request()
{
}

Request::Request(string encstr)
{
	initMessage(encstr);
}

Request::Request(int cmd, string clientID, string seckeyID, string sign, string data)
{
	initMessage(cmd, clientID, seckeyID, sign, data);
}

void Request::initMessage(string encstr)
{
	this->m_encStr = encstr;
}

void Request::initMessage(int cmd, string clientID, string seckeyID, string sign, string data)
{
	this->m_msg.set_cmdtype(cmd);
	this->m_msg.set_clientid(clientID);
	this->m_msg.set_serverid(seckeyID);
	this->m_msg.set_sign(sign);
	this->m_msg.set_data(data);
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



//Response类实现
Response::Response()
{
}

Response::Response(string encstr)
{
	initMessage(encstr);
}

Response::Response(int status, int seckeyID, string clientID, string serverID, string data)
{
	initMessage(status, seckeyID, clientID, serverID, data);
}

void Response::initMessage(string encstr)
{
	this->m_encStr = encstr;
}

void Response::initMessage(int status, int seckeyID, string clientID, string serverID, string data)
{
	this->m_msg.set_rv(status);
	this->m_msg.set_seckeyid(seckeyID);
	this->m_msg.set_clientid(clientID);
	this->m_msg.set_serverid(serverID);
	this->m_msg.set_data(data);
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
