#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "RequestMsg.pb.h"
#include "RespondMsg.pb.h"

using namespace std;
using namespace requestMsg;
using namespace respondMsg;

class Codec
{
public:
	Codec();
	virtual ~Codec();
	virtual string encodeMsg();
	virtual void *decodeMsg();
};



