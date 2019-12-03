#include "task2.h"
#include <iostream>
using namespace std;


int main(){
	bool check = checkPrime(11);
	unsigned long long value = nPrime(7);
	unsigned long long next = nextPrime(nPrime(7));
	cout << check << endl;
	cout << value << endl;
	cout << next << endl;
	system("Pause");
	return 0;
}