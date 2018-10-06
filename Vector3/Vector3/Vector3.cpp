#include "Vector3.h"


Vector3::Vector3()
{
}

Vector3::Vector3(int x, int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3::Vector3(Vector3 &vec3) {
	this->x = vec3.x;
	this->y = vec3.y;
	this->z = vec3.z;
}

Vector3::~Vector3()
{
}

int Vector3::getX() { return x; }
int Vector3::getY() { return y; }
int Vector3::getZ() { return z; }

void Vector3::setX(int x) { this->x = x; }
void Vector3::setY(int y) { this->y = y; }
void Vector3::setZ(int z) { this->z = z; }

Vector3 Vector3::plusVector(Vector3 &a, Vector3 &b) { return Vector3((a.getX() - b.getX()), (a.getY() - b.getY()), (a.getZ() - b.getZ())); }