#include "String.h"

String::String() : string(""), mem_allocate(sizeof(char*)) {}

String::String(char* s) : string(s), mem_allocate(sizeof(s)) {}

String::String(String &s) : string(s.getString()), mem_allocate(s.getMemAlloc()) {}

String::~String(){}

char* String::getString() { return this->string; }

void String::setString(String &s) { this->string = s.getString(); this->mem_allocate = s.getMemAlloc(); }

unsigned int String::getMemAlloc() { return this->mem_allocate; }

void String::setMemAlloc(unsigned int mem) { this->mem_allocate = mem; }