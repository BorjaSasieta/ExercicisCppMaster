#include "Vector3.h"

Vector3::Vector3(){}

Vector3::Vector3(int x, int y, int z) : x(x), y(y), z(z) {}

Vector3::Vector3(Vector3 &vec3) : x(vec3.x), y(vec3.y), z(vec3.z) {}

Vector3::~Vector3(){}

int Vector3::getX() { return x; }
int Vector3::getY() { return y; }
int Vector3::getZ() { return z; }

void Vector3::setX(int x) { this->x = x; }
void Vector3::setY(int y) { this->y = y; }
void Vector3::setZ(int z) { this->z = z; }

Vector3 Vector3::plusVector(Vector3 &a, Vector3 &b) { return Vector3((a.getX() - b.getX()), (a.getY() - b.getY()), (a.getZ() - b.getZ())); }

void Vector3::normalize() { this->x = 0; this->y = 0; this->z = 0; }

Vector3 Vector3::distance(Vector3 &v) { return Vector3((v.getX - this->x), (v.getY - this->y), (v.getZ - this->z)); }