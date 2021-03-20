// Prob5.cpp
#include <iostream>

using namespace std;

int Strlen_Iteration1( char str[] );
int Strlen_Iteration2( char str[] );
int Strlen_Iteration3( char str[] );
int Strlen_Iteration4( char str[] );
int Strlen_Recursion1( char str[], int idx );
int Strlen_Recursion2( char str[] );
int Strlen_Recursion3( char str[] );
int Strlen_Recursion4( char str[] );

int main(void) {
	char str[1'000];
	cin >> str;

	cout << "strlen(Iteration1): " << Strlen_Iteration1( str ) << '\n';
	cout << "strlen(Iteration2): " << Strlen_Iteration2( str ) << '\n';
	cout << "strlen(Iteration3): " << Strlen_Iteration3( str ) << '\n';
	cout << "strlen(Iteration4): " << Strlen_Iteration4( str ) << '\n';
	cout << "strlen(Recursion1): " << Strlen_Recursion1( str, 0 ) << '\n';
	cout << "strlen(Recursion2): " << Strlen_Recursion2( str ) << '\n';
	cout << "strlen(Recursion3): " << Strlen_Recursion3( str ) << '\n';
	cout << "strlen(Recursion4): " << Strlen_Recursion4( str ) << '\n';

	return 0;
}

/* ==================== Iteration ====================*/
// Method 1 (Very Easy)
int Strlen_Iteration1( char str[] ) {
	int len = 0;
	for ( int i = 0; str[i] != '\0'; i++ )
		len++;

	return len;
}

// Method 2 (Easy)
int Strlen_Iteration2( char str[] ) {
	int len = 0;
	for ( int i = 0; str[i]; i++ )
		len++;

	return len;
}

// Method 3 (Medium)
int Strlen_Iteration3( char str[] ) {
	int len;
	for ( len = 0; str[len]; len++ );
	return len;
}

// Method 4 (Easy)
int Strlen_Iteration4( char str[] ) {
	int len = 0;
	while ( str[len] )
		len++;
	return len;
}

/* ==================== Recursion ====================*/
// Method 1 (Easy)
int Strlen_Recursion1( char str[], int idx ) {
	if ( str[idx] )
		return Strlen_Recursion1( str, idx + 1 ) + 1;
	else
		return 0;
}

// Method 2 (Medium)
int Strlen_Recursion2( char str[] ) {
	if ( str[0] )
		return Strlen_Recursion2( str + 1 ) + 1;
	else
		return 0;
}

// Method 3 (Hard)
int Strlen_Recursion3( char str[] ) {
	if ( *str )
		return Strlen_Recursion3( str + 1 ) + 1;
	else
		return 0;
}

// Method 4 (Very Hard)
int Strlen_Recursion4( char str[] ) {
	return ( *str ? Strlen_Recursion4( str + 1 ) + 1 : 0 );
}