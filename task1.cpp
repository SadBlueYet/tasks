#include <iostream>
#include <stdio.h>
#include <math.h>
void outputArray();
void isMathEexpectation(int* arr);
void disp(int* arr, double mathExpectation);
void standardDeviation(int* arr, double mathExpectation);
void normalisation(int* arr, double mathExpectation);
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
	double mathExpectation = 0;
	for (int i = 0; i < 10; i++) {
		mathExpectation += arr[i];
	}
	mathExpectation /= 10;
	std::cout << "Math.Eexpectation: " << mathExpectation << '\n';
	disp(arr, mathExpectation);
	standardDeviation(arr, mathExpectation);
	normalisation(arr, mathExpectation);
}
void disp(int* arr, double mathExpectation) {
	double disp = 0;
	for (int i = 0; i < 10; i++) {
		disp += pow(arr[i] - mathExpectation, 2);
	}
	disp = sqrt(disp / 9);
	std::cout << "Dispertion: " << disp << '\n';
}
void standardDeviation(int* arr, double mathExpectation) {
	double deviation = 0;
	for (int i = 0; i < 10; i++) {
		deviation += pow(arr[i] - mathExpectation, 2);
	}
	deviation = sqrt(deviation / 10);
	std::cout << "Deviation: " << deviation << '\n';
}
void normalisation(int* arr, double mathExpectation) {
	double normalisation;
	double max = arr[0];
	double min = arr[0];
	for (int i = 0; i < 10; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];

	}
	normalisation = (mathExpectation - min) / (max - min);
	std::cout << "Normalisation: " << normalisation;
}
