#define string_h
#ifdef string_h
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
	void setString(char* s);
	unsigned int getMemAlloc();
	void setMemAlloc(unsigned int mem);
	//altres metodes
	void strcat(String &s1, String &s2);
	void strcpy(String &s1, String &s2);
	bool strcomp(String &s1, String &s2);
	void clear();
	int length();
private:
	//atributs
	char* string;
	unsigned int mem_allocate;
	//metodes d'operació
	int strlen(char* s);
	char* concat(char* a, char* b);
};
#endif