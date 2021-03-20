// Prob4.cpp
#include <iostream>

using namespace std;

int Factorial_Iteration( int n ) {
	int result = 1;
	for ( int i = 1; i <= n; i++ )
		result *= i;

	return result;
}

int Factorial_Recursion( int n ) {
	if ( n == 1 )
		return 1;
	else
		return n * Factorial_Recursion( n - 1 );
}

int main(void) {
	int n;
	cin >> n;

	cout << "Factorial(Iteration): " << Factorial_Iteration( n ) << '\n';
	cout << "Factorial(Recursion): " << Factorial_Recursion( n ) << '\n';

	return 0;
}