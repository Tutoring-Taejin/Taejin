// StackSegment_Prac4.cpp
#include <iostream>

using namespace std;

char* get_string( ) {
	char string[100];
	cin >> string;

	return string;
}

int main(void) {
	char* string = get_string();

	cout << string << '\n';

	return 0;
}