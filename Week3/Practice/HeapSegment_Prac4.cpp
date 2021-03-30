// HeapSegment_Prac4.cpp
#include <iostream>

using namespace std;

char* get_string( ) {
	char* string = new char[100];
	cin >> string;

	return string;
}

int main(void) {
	char* string = get_string();

	cout << string << '\n';

	delete[] string;

	return 0;
}