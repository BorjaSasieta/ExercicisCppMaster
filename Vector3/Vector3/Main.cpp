#include <iostream>
#include "Vector3.h"

using namespace std;

void testDistance();
void testNormalize();
void testValues(Vector3 v1, Vector3 v2, Vector3 v3);
int main() {
	Vector3 v1 = Vector3(1, 0, 1);
	Vector3 v2 = Vector3(v1);
	Vector3 v3 = v1.plusVector(v2);
	testValues(v1, v2, v3);
	testNormalize();
	testDistance();
	system("pause");
}

void testValues(Vector3 v1, Vector3 v2, Vector3 v3) {
	cout << "el valor del primer vector es: (" << v1.getX() << "," << v1.getY() << "," << v1.getZ() << ")" << endl;
	cout << "el valor del segon vector es: (" << v2.getX() << "," << v2.getY() << "," << v2.getZ() << ")" << endl;
	cout << "el valor del tercer vector es: (" << v3.getX() << "," << v3.getY() << "," << v3.getZ() << ")" << endl;
}

void testNormalize() {
	Vector3 v = Vector3(4, 2, 7);
	cout << "el valor del vector es: (" << v.getX() << "," << v.getY() << "," << v.getZ() << ")" << endl;
	cout << "ara el convertirem en un vector identitat (0,0,0)" << endl;
	v.normalize();
	cout << "el valor del vector es: (" << v.getX() << "," << v.getY() << "," << v.getZ() << ")" << endl;
}

void testDistance() {
	Vector3 v = Vector3(4, 2, 7);
	Vector3 u = Vector3(6, 1, 4);
	cout << "el valor del vector v es: (" << v.getX() << "," << v.getY() << "," << v.getZ() << ")" << endl;
	cout << "el valor del vector u es: (" << u.getX() << "," << u.getY() << "," << u.getZ() << ")" << endl;
	Vector3 d = v.distance(u);
	cout << "el valor de la distancia del vector v al vector u es: (" << d.getX() << "," << d.getY() << "," << d.getZ() << ")" << endl;
}