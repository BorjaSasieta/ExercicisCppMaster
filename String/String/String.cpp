#include "String.h"

String::String() : string(""), mem_allocate(sizeof(char*)) {}

String::String(char* s) : string(s), mem_allocate(sizeof(s)) {}

String::String(String &s) : string(s.getString()), mem_allocate(s.getMemAlloc()) {}

String::~String(){}

char* String::getString() { return this->string; }

void String::setString(String &s) { this->string = s.getString(); this->mem_allocate = s.getMemAlloc(); }

unsigned int String::getMemAlloc() { return this->mem_allocate; }

void String::setMemAlloc(unsigned int mem) { this->mem_allocate = mem; }

String String::strcat(String &s1, String &s2) { return String(s1.getString() + *s2.getString()); }

String String::strcat(char* s1, String &s2) { return String(s1 + *s2.getString()); }

String String::strcat(String &s1, char* s2) { return String(*s1.getString() + s2); }

String String::strcat(char* s1, char* s2) { return String(s1 + *s2); }

void String::strcpy(String &s1, String &s2) { s2 = s1; }

bool String::strcomp(String &s1, String &s2) { return (&s1 == &s2) ? true : false; }