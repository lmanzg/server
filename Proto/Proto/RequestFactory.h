#pragma once
#include "data.h"
#include "codecFactory.h"
#include "Request.h"

class RequestFactory :public CodecFactory
{
public:
	RequestFactory(string enc);
	RequestFactory(Requestinfo *info);
	Codec *createCodec();
	~RequestFactory();
private:
	bool m_fiag;
	string m_encStr;
	Requestinfo *m_info;

};