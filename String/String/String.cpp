#include "String.h"
#include <malloc.h>

String::String(){}

String::String(char* s) : string(s), mem_allocate(strlen(s) * sizeof(char)) {}

String::String(String &s) : string(s.getString()), mem_allocate(s.getMemAlloc()) {}

String::~String(){}

char* String::getString() { return this->string; }

void String::setString(char* s) { this->string = s; }

unsigned int String::getMemAlloc() { return this->mem_allocate; }

void String::setMemAlloc(unsigned int mem) { this->mem_allocate = mem; }

void String::strcat(String &s1, String &s2) { this->string = concat(s1.getString(), s2.getString()); this->mem_allocate = s1.getMemAlloc() + s2.getMemAlloc(); }

void String::strcpy(String &s1, String &s2) { s1.setString(s2.getString()); s1.setMemAlloc(s2.getMemAlloc()); }

bool String::strcomp(String &s1, String &s2) { return (s1.getString() == s2.getString()) ? true : false; }

void String::clear() { this->string = ""; this->mem_allocate = sizeof(this->string); }

int String::length() { return this->mem_allocate; }

int String::strlen(char* s) {
	int ret = 0;
	while(*s++) { ret++; }
	return ret;
}

char* String::concat(char* a, char* b) {
	char* ret = (char*)calloc(strlen(a) + strlen(b) + 1, sizeof(char));
	int cont = 0;
	while (*a++) { ret[cont] = *(a - 1); cont++; }
	while (*b++) { ret[cont] = *(b - 1); cont++; }
	return ret;
}