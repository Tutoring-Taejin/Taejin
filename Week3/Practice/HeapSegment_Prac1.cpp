// HeapSegment_Prac1.cpp
#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	int* arr = new int[n];
	for ( int i = 0; i < n; i++ )
		cin >> arr[i];

	return 0;
}