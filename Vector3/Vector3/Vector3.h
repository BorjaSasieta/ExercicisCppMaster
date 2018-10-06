#pragma once
class Vector3
{
public:
	Vector3();
	Vector3(int x, int y, int z);
	Vector3(Vector3 &vec3);
	virtual ~Vector3();

private:
	int x = 0;
	int y = 0;
	int z = 0;

};

