#include <iostream>
#include <stdio.h>
#include <math.h>
void outputArray();
void isMathEexpectation(int* arr);
void disp(int* arr, double
	mathExpectation);
int main()
{
	outputArray();
	
}
void outputArray() {
	const int arrLength = 10;
	int arrayNumbers[arrLength];
	
	for (int i = 0; i < arrLength; i++) {
		std::cin >> arrayNumbers[i];
		
	}
	isMathEexpectation(arrayNumbers);
	
	
}
void isMathEexpectation(int* arr) {
	double mathEexpectation = 0;
	for (int i = 0; i < 10; i++) {
		mathEexpectation += arr[i];
	}
	mathEexpectation /= 10;
	std::cout << mathEexpectation  << '\n';
	disp(arr, mathEexpectation);
}
void disp(int* arr, double mathExpectation) {
	double disp = 0;
	for (int i = 0; i < 10; i++) {
		disp += pow(arr[i] - mathExpectation, 2);
	}
	disp = sqrt(disp / 9);
	std::cout << disp;
}