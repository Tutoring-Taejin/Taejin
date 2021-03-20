// Prob3.cpp
#include <iostream>

using namespace std;

int Sum_Iteration( int n, int arr[] ) {
	int sum = 0;
	for ( int i = 0; i < n; i++ )
		sum += arr[i];

	return sum;
}

int Sum_Recursion( int arr[], int start, int end ) {
	if ( start == end )
		return arr[start];
	else
		return arr[start] + Sum_Recursion( arr, start + 1, end );
}

int main(void) {
	int n;
	cin >> n;

	int arr[1'000];
	for ( int i = 0; i < n; i++ )
		cin >> arr[i];

	cout << "Sum(Iteration): " << Sum_Iteration( n, arr ) << '\n';
	cout << "Sum(Recursion): " << Sum_Recursion( arr, 0, n - 1 ) << '\n';

	return 0;
}