#include <iostream>
#include "myvector.h"

using namespace std;

ostream& operator << (ostream& os, myvector const &m) {
	return os << "[" << m.v[0] << "," << m.v[1] << "," << m.v[2] << "]" << endl;
}

int main() {
	myvector a{ 1.0f,0.f,-1.0f };
	myvector b{ -.5f,1.5f,.5f };
	
	
	cout << "a+b= "<<a+b;

	
	cout << "a+b= " << a-b;

	cout << "a.b= " << a.dot(b) << endl;;
	
	cout << "norm a= "<<a.norm() << endl;

	cout << "normalize b= "<< b.normalize() << endl;

	

	


	system("pause");
	return 0;
}