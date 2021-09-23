#include <stdio.h>

int main() {
	printf("the answer for problem 1 is %d\n", problemOne());
	printf("the answer for problem 5 is %d\n", problemSix());
}
	
//multiples of 3 or 5
int problemOne() {
	int sum = 0;
	for(int i = 0; i < 1000; i++) {
		if(i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	return sum;
}

//smallest positive number evenly divisible by all numbers 1 - 20
int problemSix() {
	int sumOfSquares = 0;
	int squareOfSum = 0;
	for(int i = 0; i <= 100; i++) {
		sumOfSquares += i * i;
		squareOfSum += i;
	}
	squareOfSum *= squareOfSum;
	return squareOfSum - sumOfSquares;
}


