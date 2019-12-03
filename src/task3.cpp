#include "task2.h"
#include "task3.h"


unsigned long long sumPrime(unsigned int hbound){
	unsigned long long sum = 1;
	unsigned long long value = 1;
	while(1){
		value = nextPrime(value);
		sum += value;
		if (sum >= hbound){
			sum -= value;
			return sum;
		}
	}
}