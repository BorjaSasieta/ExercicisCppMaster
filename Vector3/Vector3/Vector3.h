#pragma once
class Vector3
{
public:
	Vector3();
	Vector3(int x, int y, int z);
	virtual ~Vector3();

private:
	int x = 0;
	int y = 0;
	int z = 0;

};

