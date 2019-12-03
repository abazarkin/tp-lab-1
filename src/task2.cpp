


bool checkPrime(unsigned int value){
	int flag = 1;
	for (int i = 2; i < value; i++){
		if (value == 2)
			return 1;
		if (value % i == 0){
			flag = 0;
			return 0;
		}
	}
	if (flag == 1)
		return 1;
}	

unsigned long long nPrime(unsigned n){
	unsigned int value = 1;
	int count = 0;
	while(1){
		if (checkPrime(value) == 1)
			count++;
		if (count == n)
			return value;
		value++;
	}
}

unsigned long long nextPrime(unsigned long long value){
	unsigned long long new_value = value + 1;
	while(1){
		if (checkPrime(new_value) == 1)
			return new_value;
		new_value++;
	}
}