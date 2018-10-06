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
	//altres metodes
	String strcat(String &s1, String &s2);
	String strcat(char* s1, String &s2);
	String strcat(String &s1, char* s2);
	String strcat(char* s1, char* s2);
	void strcpy(String &s1, String &s2);
	bool strcomp(String &s1, String &s2);
private:
	char* string;
	unsigned int mem_allocate;
};

