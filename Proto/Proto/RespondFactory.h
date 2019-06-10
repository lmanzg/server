#pragma once
#include "data.h"
#include "Response.h"
class RespondFactory
{
public:
	RespondFactory(string enc);
	RespondFactory(RespondInfo *info);
	Codec *createCodec();
	~RespondFactory();
private:
	bool m_fiag;
	string m_encStr;
	RespondInfo *m_info;
};