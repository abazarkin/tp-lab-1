#include "task2.h"


bool checkPrime(unsigned int value){
	if(value == 1)
		return false;
	for(int i = 2; i < floor(sqrt(value)); i++)
		if(value % i == 0)
			return false;
	return true;
}	

unsigned long long nPrime(unsigned n){
	n++;
	while(!checkPrime(n))
		n++;
	return n;
}

unsigned long long nextPrime(unsigned long long value){
	unsigned long long new_value = value + 1;
	while(1){
		if (checkPrime(new_value) == 1)
			return new_value;
		new_value++;
	}
}