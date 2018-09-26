#include <iostream>
#include "Somma.h"
using namespace std;
int main() {
	int num1, num2;
	cout << "inserire numero 1:";
	cin >> num1;
	cout << endl;

	cout << "inserire numero 2:";
	cin >> num2;
	cout << endl;

	Somma somma{ num1, num2 };
	int result = somma.sommare();
	
	cout << "Il risultato della somma: " << result <<endl;

	system("pause");
	return 0;
}