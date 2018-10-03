#include "myvector.h"

myvector::myvector(const myvector & a)
{
	for (int i = 0; i < 3; i++) {
		v[i] = a.v[i];
	}
}

myvector::myvector(float x, float y, float z)
{
	v[0] = x;
	v[1] = y;
	v[2] = z;
}

myvector::myvector(float temp[])
{
	for (int i = 0; i < 3; i++) {
		v[i] = temp[i];
	}
}

myvector  myvector::operator+(myvector  vet)
{
	return myvector{v[0]+vet.v[0],v[1] + vet.v[1], v[2] + vet.v[2]};
}

myvector  myvector::operator-(myvector  vet)
{
	return myvector{ v[0] - vet.v[0],v[1] - vet.v[1], v[2] - vet.v[2] };
}

myvector::myvector(int temp[])
{
	for (int i = 0; i < 3; i++) {
		v[i] = static_cast<float>(temp[i]);
	}
}

myvector::myvector(int x, int y, int z)
{
	v[0] = static_cast<float>(x);
	v[1] = static_cast<float>(x);
	v[2] = static_cast<float>(x);
}

myvector::~myvector()
{
}

myvector myvector::normalize()
{
	float normal = norm();
	for (int i = 0; i < 3; i++) {
		v[i] /= normal;
	}
	return *this;
}

myvector & myvector::operator-=(const myvector & vet)
{
	
	for (int i = 0; i < 3; i++) {
		v[i] -= vet.v[i];
	}
	return *this;
}

myvector & myvector::operator+=(const myvector & vet)
{
	for (int i = 0; i < 3; i++) {
		v[i] += vet.v[i];
	}
	return *this;
}

float myvector::dot(myvector vet)
{
	float temp = 0;
	for (int i = 0; i < 3; i++) {
		temp += (v[i] * vet.v[i]);
	}
	return temp;
}

float myvector::norm()
{
	return sqrt(pow(v[0], 2) + pow(v[1], 2) + pow(v[2], 2));
}

myvector myvector::cross(myvector vet)
{
	myvector* temp = this;
	v[0] = temp->v[1] * vet.v[2] - temp->v[2] * vet.v[1];
	v[1] = temp->v[0] * vet.v[2] - temp->v[2] * vet.v[0];
	v[2] = temp->v[0] * vet.v[1] - temp->v[1] * vet.v[0];
	return *this;
}
