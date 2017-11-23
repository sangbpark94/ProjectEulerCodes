#include <iostream>

using namespace std;

int main(){
	long long num = 600851475143;
	long long i = 2;
	long long largestFactor = 1;
	while(true){
		if(num == 1)
			break;
		else if(num % i == 0){
			if(i > largestFactor)
				largestFactor = i;
			num /= i;
			i = 2;
		}
			
		i++;	
	}
	return largestFactor;
}

