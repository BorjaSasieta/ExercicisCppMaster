#pragma once
class Vector3
{
public:
	//constructors
	Vector3();
	Vector3(int x, int y, int z);
	Vector3(Vector3 &vec3);
	//destructors
	virtual ~Vector3();
	//getters y setters
	int getX();
	int getY();
	int getZ();
	void setX(int x);
	void setY(int y);
	void setZ(int z);
	//altres metodes
	Vector3 plusVector(Vector3 &a, Vector3 &b);
	void normalize();
	Vector3 distance(Vector3 &v);
private:
	int x = 0;
	int y = 0;
	int z = 0;
};

