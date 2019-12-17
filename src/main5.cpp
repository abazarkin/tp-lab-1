#include "task5.h"
#include <iostream>
using namespace std;


int main(){
	char inp[] = "Not/hard/task";
	int n = 0;
	char sp = '/';
	char **result;
	split(&result, &n, inp, sp);
	for(int i = 0; i < n; i++){
	    cout << result[i] << endl;
	}
	system("Pause");
	return 0;
}