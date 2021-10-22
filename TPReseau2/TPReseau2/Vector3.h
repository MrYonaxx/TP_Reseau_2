#pragma once

/*template<typename T>
struct Vector3<T>
{
	public T x;
	public T y;
	public T z;
};*/

struct Vector3
{
public:
	float x;
	float y;
	float z;

	Vector3()
	{
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

	Vector3(float x, float y, float z) 
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
};