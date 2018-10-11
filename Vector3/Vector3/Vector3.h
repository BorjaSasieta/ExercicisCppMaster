#define vector3_h
#ifdef vector3_h
class Vector3
{
public:
	//constructors
	Vector3();
	Vector3(float x, float y, float z);
	Vector3(Vector3 &vec3);
	//destructors
	virtual ~Vector3();
	//getters y setters
	float getX();
	float getY();
	float getZ();
	void setX(int x);
	void setY(int y);
	void setZ(int z);
	//altres metodes
	Vector3 plusVector(Vector3 a);
	void normalize();
	Vector3 distance(Vector3 v);
private:
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
};
#endif