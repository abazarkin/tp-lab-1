#include "task2.h"
#include "task3.h"
#include "math.h"


unsigned long long sumPrime(unsigned int hbound){
	unsigned long long sum = 0;
	for (int i = 2; i < hbound; i++)
		if(checkPrime(i))
			sum += i
	return sum
}