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
