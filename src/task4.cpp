#include "task4.h"


char *sum(char *x, char *y){
	int len;
	int summ = 0;
	int len_x = strlen(x);
	int len_y = strlen(y);
	if(len_x > len_y)
		len = len_x;
	else
		len = len_y;
	char *sum = (char*)malloc((len + 1) * sizeof(char));
	for(int i = 1; i <= len + 1; i++){
		if(i <= len_x)
			summ += (*(x + (len_x - i)) - '0');
		if(i <= len_y)
			summ += (*(y + (len_y - i)) - '0');
		*(sum + len + 1 - i) = s % 10 + '0';
		s /= 10;
	}
	*(sum + len + 1) = 0;
	if(*(sum) == '0')
		for(int i = 0; i <= len; i++)
			*(sum + i) = *(sum + i + 1);
	return sum;
} 