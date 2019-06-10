#include "RequestFactory.h"

RequestFactory::RequestFactory(string enc)
{
	this->m_encStr = enc;
	this->m_fiag = false;
}

RequestFactory::RequestFactory(Requestinfo * info)
{
	this->m_info = info;
	this->m_fiag = true;
}

Codec * RequestFactory::createCodec()
{
	Codec * c = nullptr;
	//±àÂë
	if (this->m_fiag)
	{
		c = new Request(m_info);
	}
	//½âÂë
	else 
	{
		c = new Request(m_encStr);
	}

	return c;
}

RequestFactory::~RequestFactory()
{
}
