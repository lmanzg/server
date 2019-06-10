#pragma once
#include <iostream>
#include "data.h"

class CodecFactory
{
public:
	CodecFactory();
	virtual Codec * createCodec();
	~CodecFactory();
};