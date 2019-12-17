#include "task1.h"


unsigned long findValue(unsigned int min, unsigned int max){
	unsigned int value = 1;
	bool flag = 1;
	while(flag){
		flag = 0;
		for(int i = min; i <= max; i++){
			if(value % i != 0){
				flag = 1;
				break;
			}
		value++;
		}
	}
	value--;
	return value;
}
