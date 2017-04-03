// ClarionDLL.h

#pragma once

#include <msclr\auto_gcroot.h>

using namespace System;
using namespace msclr;


public class SimpleClass
{
public:
	void setIntValue(int newIntValue);
	int getIntValue();
	void setDoubleValue(double newDoubleValue);
	double getDoubleValue();
	void setStringValue(String ^ newStringValue);
	String ^ getStringValue();
private:
	int intValue;
	double doubleValue;
	auto_gcroot<String ^> stringValue;
};


extern "C" __declspec(dllexport) void * createSimpleClass();
extern "C" __declspec(dllexport) void deleteSimpleClass(void * aSimpleClass);
extern "C" __declspec(dllexport) void setIntValue(void * aSimpleClass, int newIntValue);
extern "C" __declspec(dllexport) int getIntValue(void * aSimpleClass);
extern "C" __declspec(dllexport) void setDoubleValue(void * aSimpleClass, double newDoubleValue);
extern "C" __declspec(dllexport) double getDoubleValue(void * aSimpleClass);
extern "C" __declspec(dllexport) void setStringValue(void * aSimpleClass, char * newStringValue);
extern "C" __declspec(dllexport) char * getStringValue(void * aSimpleClass);
