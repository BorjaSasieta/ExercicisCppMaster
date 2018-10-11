#include "Vector3.h"
#include <math.h>

Vector3::Vector3(){}

Vector3::Vector3(int x, int y, int z) : x(x), y(y), z(z) {}

Vector3::Vector3(Vector3 &vec3) : x(vec3.x), y(vec3.y), z(vec3.z) {}

Vector3::~Vector3(){}

float Vector3::getX() { return this->x; }
float Vector3::getY() { return this->y; }
float Vector3::getZ() { return this->z; }

void Vector3::setX(int x) { this->x = x; }
void Vector3::setY(int y) { this->y = y; }
void Vector3::setZ(int z) { this->z = z; }

Vector3 Vector3::plusVector(Vector3 a) { return Vector3((a.getX() + this->x), (a.getY() + this->y), (a.getZ() + this->z)); }

void Vector3::normalize() { 
	double operand = sqrt(pow(this->x,2) + pow(this->y, 2) + pow(this->z, 2));
	this->x /= operand;
	this->y /= operand;
	this->z /= operand;
}

Vector3 Vector3::distance(Vector3 v) { return Vector3((v.getX() - this->x), (v.getY() - this->y), (v.getZ() - this->z)); }