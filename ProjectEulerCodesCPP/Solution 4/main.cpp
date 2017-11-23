/*
 * main.cpp
 *
 *  Created on: Nov 23, 2017
 *      Author: USER
 */

#include <iostream>

using namespace std;

void calcPrime(int *array);

int main(){
	int num = 10;
	int largestPrimes[21] = {0};
	int * temp = new int[num];
	for(int i = 2; i <= num; i++){
		calcPrime(*temp, i);
		for(int j = 2; j <= 20; j++)
			if(temp[j] > largestPrimes[j])
				largestPrimes[j] = temp[j];
	}
	int sum = 0;
	for(int k = 2; k <= 20; k++)
		sum += k * largestPrimes[k];
	cout << sum;
}

void calcPrime(int *array,  int num){
	for(int i = 2; i <= num; i++)
		if(num % i == 0){
			array[i]++;
			num /= i;
			i = 2;
		}
}

