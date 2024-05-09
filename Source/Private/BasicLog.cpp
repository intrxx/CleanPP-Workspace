#include <iostream>
#include "..\Public\BasicLog.h"

void BasicLog::Log(const char* Message) 
{
	std::cout << Message << std::endl;
}