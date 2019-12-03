#include "task1.h"


unsigned long findValue(unsigned int min, unsigned int max){
	unsigned int value = 1;
	int flag = 0;
	while(flag == 0){
		for(int i = min; i < max; i++){
			if(value % i != 0)
				break;
			else
				if(i == max)
					flag = 1;
		}
		if(flag == 0)
			value++;
	}
	return value;
}