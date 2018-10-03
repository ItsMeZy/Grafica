#pragma once
#include <vector>
using namespace std;

class myvector
{
public:
	myvector(const myvector& a);
	myvector(float x,float y, float z);
	myvector(float temp[]);
	myvector operator+(myvector);
	myvector operator-(myvector);
	myvector(int temp[]);
	myvector(int x, int y, int z);
	~myvector();
	myvector normalize();
	myvector& operator -=(const myvector&);
	myvector& operator +=(const myvector&);
	float dot(myvector);
	float norm();
	myvector cross(myvector);

	float v[3];
};

