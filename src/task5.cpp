#include "task5.h"

//
void split(char ***result, int *N, char *buf, char ch){
	*N = 1;
	int len = strlen(buf);
	for(int i = 0; i < len; i++)
		if(*(buf + i) == ch)
			*N += 1;
	*result = (char**)malloc(*N * sizeof(char*));
	int i = 0;
	for(int j = 0; j < *N; j++){
		int tmplen = 0;
		while((*(buf + 1) != 0) && (*(buf + 1) != ch)){
			i++;
			tmplen++;
		}
		*(*result + j) = (char*)malloc((tmplen + 1) * sizeof(char));
		strncpy(*(*result + j), buf + i - tmplen, tmplen);
		*(*(*result + j) + tmplen) = 0;
		i++;
	}
} 