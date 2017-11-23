#include <iostream>

using namespace std;

int main(){
	long sum = 0;
	long i = 1;
	long j = 2;
	long k = 3;
	sum += j;
	while(true){
		i = j;
		j = k;
		k = i + j;
		if(k > 4000000)
			break;
		if(k % 2 == 0)
			sum += k;
	}
	return sum;
}
