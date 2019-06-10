#include "RespondFactory.h"

RespondFactory::RespondFactory(string enc)
{
	this->m_encStr = enc;
	this->m_fiag = false;
}

RespondFactory::RespondFactory(RespondInfo * info)
{
	this->m_info = info;
	this->m_fiag = true;
}

Codec * RespondFactory::createCodec()
{
	Codec * c = nullptr;
	//±àÂë
	if (this->m_fiag)
	{
		c = new Response(m_info);
	}
	//½âÂë
	else
	{
		c = new Response(m_encStr);
	}

	return c;
}

RespondFactory::~RespondFactory()
{
}
