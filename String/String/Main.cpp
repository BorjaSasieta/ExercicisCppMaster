#include <iostream>
#include "String.h"

using namespace std;

void testEnd();
void testComp();
void testCopy();
void testConcat();

void main() {
	testConcat();
	testCopy();
	testComp();
	testEnd();
	system("pause");
}

void testConcat() {
	char* a = "hola Mundo!";
	char* b = " Esto es un test!";
	String s1 = String(a);
	String s2 = String(b);
	String s = String();
	s.strcat(s1, s2);
	cout << s.getString() << endl;
}

void testCopy() {
	String a = String("es para copiar");
	String b = String();
	b.strcpy(b, a);
	cout << b.getString() << endl;
}

void testComp(){
	String a = String("es igual");
	String b = String("es igual");
	String c = String("es diferente por que es una cosa");
	String d = String("es diferente por que es algo");
	bool b1 = a.strcomp(a, b);
	bool b2 = c.strcomp(c, d);
	cout << "la cadena '" << a.getString() << "' es igual a la cadena '" << b.getString() << "' " << b1 << endl;
	cout << "la cadena '" << c.getString() << "' es igual a la cadena '" << d.getString() << "' " << b2 << endl;
}

void testEnd() {
	String a = String("el perico de los palotes se ha dejado la ropa en casa de fulanito");
	cout << a.getString() << " 'esta cadena contiene: ' " << a.length() << " caracteres" << endl;
	a.clear();
	cout << a.getString() << " se acabo" << endl;
}