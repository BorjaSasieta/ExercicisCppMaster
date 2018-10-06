#pragma once
class String
{
public:
	//constructors
	String();
	String(char* s);
	String(String &s);
	//destructors
	virtual ~String();
	//getters i setters
	char* getString();
	void setString(String &s);
	unsigned int getMemAlloc();
	void setMemAlloc(unsigned int mem);
private:
	char* string;
	unsigned int mem_allocate;
};

