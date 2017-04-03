// This is the main DLL file.

#include "stdafx.h"

#include "ClarionDLL.h"

using namespace Runtime::InteropServices;


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


void * createSimpleClass()
{
	SimpleClass * mySimpleClass = new SimpleClass();
	return (void *)mySimpleClass;
}

void deleteSimpleClass(void * aSimpleClass)
{
	SimpleClass * mySimpleClass = (SimpleClass *)aSimpleClass;
	delete mySimpleClass;
}

void setIntValue(void * aSimpleClass, int newIntValue)
{
	SimpleClass * mySimpleClass = (SimpleClass *)aSimpleClass;
	mySimpleClass->setIntValue(newIntValue);
}

int getIntValue(void * aSimpleClass)
{
	SimpleClass * mySimpleClass = (SimpleClass *)aSimpleClass;
	return mySimpleClass->getIntValue();
}

void setDoubleValue(void * aSimpleClass, double newDoubleValue)
{
	SimpleClass * mySimpleClass = (SimpleClass *)aSimpleClass;
	mySimpleClass->setDoubleValue(newDoubleValue);
}

double getDoubleValue(void * aSimpleClass)
{
	SimpleClass * mySimpleClass = (SimpleClass *)aSimpleClass;
	return mySimpleClass->getDoubleValue();
}

void setStringValue(void * aSimpleClass, char * newStringValue)
{
	SimpleClass * mySimpleClass = (SimpleClass *)aSimpleClass;
	String ^test = gcnew String(newStringValue);

	mySimpleClass->setStringValue(test);
}

char * getStringValue(void * aSimpleClass)
{
	SimpleClass * mySimpleClass = (SimpleClass *)aSimpleClass;
	return (char *)Marshal::StringToHGlobalAnsi(mySimpleClass->getStringValue()).ToPointer();
}
