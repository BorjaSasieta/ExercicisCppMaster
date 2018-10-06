#pragma once
class String
{
public:
	String();
	String(char* s);
	virtual ~String();

private:
	char* string;
	unsigned int mem_allocate;
};

