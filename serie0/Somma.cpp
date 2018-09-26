#include "Somma.h"



Somma::Somma(int m_num1,int m_num2)
{
	num1 = m_num1;
	num2 = m_num2;
}


Somma::~Somma()
{
}

int Somma::sommare()
{
	return num1 + num2;
}
