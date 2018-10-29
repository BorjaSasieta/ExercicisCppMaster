#define vector3_h
#ifdef vector3_h
class Vector3
{
public:
	//constructors
	Vector3();
	Vector3(float x, float y, float z);
	Vector3(const Vector3 &vec3);
	//destructors
	virtual ~Vector3();
	//getters y setters
	const float getX();
	const float getY();
	const float getZ();
	void setX(int x);
	void setY(int y);
	void setZ(int z);
	//altres metodes
	Vector3 plusVector(Vector3 a);
	void normalize();
	float distance(Vector3 const v);
private:
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
};
#endif