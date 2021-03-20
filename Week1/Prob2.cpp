// Prob2.cpp
#include <iostream>

using namespace std;

int Fib_Recursion( int n ) {
	if ( n < 2 )
		return n;
	else
		return Fib_Recursion( n - 1 ) + Fib_Recursion( n - 2 );
}

int Fib_Iteration( int n ) {
	if ( n < 2 )
		return n;
	else {
		int f1 = 0, f2 = 1, f3;
		for ( int i = 2; i <= n; i++ ) {
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}

		return f3;
	}
}

int main(void) {
	int n;
	cin >> n;

	cout << "Fib(n)_Recursion: " << Fib_Recursion( n ) << '\n';
	cout << "Fib(n)_Iterration: " << Fib_Iteration( n ) << '\n';

	return 0;
}