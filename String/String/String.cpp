#include "String.h"

String::String() : string(""), mem_allocate(sizeof(char*)) {}

String::String(char* s) : string(s), mem_allocate(sizeof(s)) {}

String::~String(){}