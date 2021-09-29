#include <stdio.h>
#include "euler.h"

int multiples(void){
	int sum = 0;
	int n;
	for(n = 0; n < 1000; n++){
		if(n % 3 == 0 || n % 5 == 0){
			sum +=n;
		}
	}
	return sum;
}
int fib(void){
	int i;
	int prev1 = 0;
	int prev2 = 0;
	int sum = 0;
	for(i = 1; i < 4000000; i +=0){
		i += prev1 + prev2;
		prev2 = prev1;
		prev1 = i;
		if(i % 2 == 0){ sum += i;}
	}
	return sum;
}
/*int largestPrime(long n){
	long largest = 1;
	long i;
	for(i = 1;i < n/2; i ++){
		long x = largestPrime(i);
		if(n %x == 0 && x > largest){ largest = x;}
	}
	if(largest == 1){return n;}
	else { return largest;}
}*/
int largestPal(void){
	int i;
	int j;
	for(i = 999; i > 100; i--){
		for(j = 999; j >100; j--){
			int x;
			int pal =0;
			for(x = j *i; x>0; x/=10){
					 	pal *= 10;
						pal += x % 10;
			}
			if(pal == i*j && pal){
				return pal;
			}
		}}
		return 0;
	}
