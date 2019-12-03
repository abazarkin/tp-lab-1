#include "task4.h"

char *sum(char *x, char *y){
	int len;
	char *ans;
	int len_x = strlen(x);
	int len_y = strlen(y);

	if (len_x > len_y){
		len = len_x;
	}
	else{
		len = len_y;
	}
	int len_ans = len + 1;
	ans = (char*)malloc((len_ans)*sizeof(char));
	int term_x = 0;
	int term_y = 0;
	int sum_xy = 0;
	for (int i = 0; i < (len_ans); i++){
		term_x = 0; 
		term_y = 0;
		if (i < len_x){
			term_x = (*(x + len_x - 1 - i) - '0');
		}
		if (i < len_y){
			term_y = (*(y + len_y - 1 - i) - '0');
		}
		sum_xy = sum_xy + term_x + term_y;
		ans[len_ans - 1 - i] = sum_xy % 10 + '0';
		sum_xy = sum_xy / 10;
	}
	ans[len_ans] = '\0';
	if (*ans == '0'){
		for (int i = 0; i <= len_ans; i++){
			*(ans + i) = *(ans + i + 1);
		}
	}
	return ans;
} 