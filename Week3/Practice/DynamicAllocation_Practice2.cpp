// DynamicAllocation_Practice2.cpp
#include <iostream>

using namespace std;

void PrintMemory( int* arr ) {
	for ( int i = 0; i < 5; i++ )
		cout << &arr[i] << ' ';
	cout << endl;
}

int main(void) {
	int nums_stack1[5] = { 1, 2, 3, 4, 5 };
	int nums_stack2[5] = { 6, 7, 8, 9, 10 };

	int* nums_heap1 = new int[5] { 1, 2, 3, 4, 5 };
	int* nums_heap2 = new int[5] { 6, 7, 8, 9, 10 };

	PrintMemory( nums_stack1 );
	PrintMemory( nums_stack2 );

	PrintMemory( nums_heap1 );
	PrintMemory( nums_heap2 );

	delete[] nums_heap1;
	delete[] nums_heap2;

	return 0;
}