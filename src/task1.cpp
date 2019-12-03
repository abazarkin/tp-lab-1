#include "task1.h"


unsigned long findValue(unsigned int min, unsigned int max){
	unsigned int value = 1;
	int flag = 1;
	for (int i = min; i <= max; i++) {
		for (int j = 2; j < i; j++){
			if (i == 2)
				break;
			if (i % j == 0){
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			value *= i;
		flag = 1;
	}
	return value;
}