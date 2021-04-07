// Array_Disadvantage2.cpp
#include <iostream>

using namespace std;

void PrintArray( int* arr, int size ) {
	for ( int i = 0; i < size; i++ )
		cout << arr[i] << ' ';
	cout << '\n';
}

int main(void) {
	int n;
	cin >> n;

	int* arr = new int[n];

	int size;
	cin >> size;

	for ( int i = 0; i < size; i++ )
		cin >> arr[i];

	PrintArray( arr, size );

	delete[] arr;

	return 0;
}