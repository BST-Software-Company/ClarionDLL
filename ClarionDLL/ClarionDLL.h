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
