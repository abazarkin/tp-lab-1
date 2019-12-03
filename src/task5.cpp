#include "task5.h"


void split(char ***result, int *N, char *buf, char ch){
	int len_buf = strlen(buf);
	for (int i = 0; i < len_buf; i++) {
		if (buf[i] == ch) {
			(*N)++;
		}
	}
	(*N)++;
	*result = new char*[*N]; 
	char *word = new char[len_buf];
	int j = 0;
	int k = 0;
	for (int i = 0; i < len_buf + 1; i++){
		if ((buf[i] != ch) && (buf[i] != '\0')){
			word[j] = buf[i];
			j++;
		}
		if ((buf[i] == ch) || (buf[i] == '\0')){
			word[j] = '\0';
			*(*result + k) = word;
			k++;
			j = 0;
			word = new char[len_buf];
		}
	}
} 