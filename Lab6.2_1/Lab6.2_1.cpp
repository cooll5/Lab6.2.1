#include <iostream>

#include <iostream>

using namespace std;

int array_result_min (int A[], int max, int min)
{
	for (int i = 0; i < 10; i++)
	{
		A[i] = rand() % 20 - 40;
		if (A[i] > min)
		{
			min = i;
		}
	}
	return min;
}
int array_result_max(int A[], int max, int min) {
	for (int i = 0; i < 10; i++)
	{
		if (A[i] < max)
		{
			max = i;
		}
	}
	return max;
}

float array_result_avr(int A[], int max, int min, float avr)
{
	for (int i = 0; i < 10; i++)
	{
		if (A[i] < max && A[i] > min)
		{  
			avr = (max + min) / 2;
		}
	}
	return avr;
}

int output(int A[]){
	cout << "Array: ";
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "] " << A[i] << "   ";
	}
	return 1;
}
int main() {
	int A[10];
	int max = 0;
	int min = 0;
	float avr = 0;
	cout << "Result(min): " << array_result_min(A, max, min) << endl;
	cout << "Result(max): " << array_result_max(A, max, min) << endl;
	cout << "Result(avr): " << array_result_avr(A, max, min, avr) << endl;
	cout << output(A) << endl;
	return 0;
}