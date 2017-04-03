// This is the main DLL file.

#include "stdafx.h"

#include "ClarionDLL.h"


void SimpleClass::setIntValue(int newIntValue)
{
	intValue = newIntValue;
}

int SimpleClass::getIntValue()
{
	return intValue;
}

void SimpleClass::setDoubleValue(double newDoubleValue)
{
	doubleValue = newDoubleValue;
}

double SimpleClass::getDoubleValue()
{
	return doubleValue;
}

void SimpleClass::setStringValue(String ^ newStringValue)
{
	stringValue = newStringValue;
}

String ^ SimpleClass::getStringValue()
{
	return stringValue.get();
}
