#include "Vector3.h"
#include <math.h>

Vector3::Vector3(){}

Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

Vector3::Vector3(const Vector3 &vec3) : x(vec3.x), y(vec3.y), z(vec3.z) {}

Vector3::~Vector3(){}

const float Vector3::getX() { return this->x; }
const float Vector3::getY() { return this->y; }
const float Vector3::getZ() { return this->z; }

void Vector3::setX(int x) { this->x = x; }
void Vector3::setY(int y) { this->y = y; }
void Vector3::setZ(int z) { this->z = z; }

Vector3 Vector3::plusVector(Vector3 a) { return Vector3((a.getX() + this->x), (a.getY() + this->y), (a.getZ() + this->z)); }

void Vector3::normalize() { 
	double operand = sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
	this->x /= operand;
	this->y /= operand;
	this->z /= operand;
}

float Vector3::distance(Vector3 const v) { return sqrt((v.x - this->x) * (v.x - this->x) + 
									(v.y - this->y) * (v.y - this->y) + 
									(v.z - this->z) * (v.z - this->z)); }