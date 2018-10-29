#include "String.h"
#include <malloc.h>

String::String(){}

String::String(char* s) : string(s), mem_allocate(strlen(s) + 1 * sizeof(char)) {}

String::String(const String &s) : string(s.string), mem_allocate(s.mem_allocate) {}

String::~String(){}

char* String::getString() { return this->string; }

void String::setString(char* s) { this->string = s; }

unsigned int String::getMemAlloc() { return this->mem_allocate; }

void String::strcat(String &s1, String &s2) { this->string = concat(s1.string, s2.string); this->mem_allocate = s1.mem_allocate + s2.mem_allocate; }

void String::strcpy(String &s1, String &s2) { s1.setString((s2.getString())); s1.mem_allocate = (strlen(s1.getString()) + 1 * sizeof(char)); }

bool String::strcomp(String &s1, String &s2) { return (s1.getString() == s2.getString()) ? true : false; }

void String::clear() { delete string; this->mem_allocate = 0; }

int String::length() { return this->mem_allocate; }

int String::strlen(const char* s) {
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