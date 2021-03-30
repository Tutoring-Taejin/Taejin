// DynamicAllocation_Practice1.cpp
#include <iostream>

using namespace std;

int main(void) {
	char* char1 = new char;
	short* short1 = new short;
	int* int1 = new int;
	long long* long1 = new long long;

	cout << sizeof( char1 ) << endl;
	cout << sizeof( short1 ) << endl;
	cout << sizeof( int1 ) << endl;
	cout << sizeof( long1 ) << endl;

	cout << "====================" << endl;

	cout << sizeof( *char1 ) << endl;
	cout << sizeof( *short1 ) << endl;
	cout << sizeof( *int1 ) << endl;
	cout << sizeof( *long1 ) << endl;

	cout << "====================" << endl;

	*int1 = 10;
	cout << int1 << endl;
	cout << *int1 << endl;

	cout << "====================" << endl;

	*int1 = 20;
	cout << int1 << endl;
	cout << *int1 << endl;

	delete char1;
	delete short1;
	delete int1;
	delete long1;

	return 0;
}