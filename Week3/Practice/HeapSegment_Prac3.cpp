// HeapSegment_Prac3.cpp
#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	char* string = new char[n + 1];
	cin >> string;

	cout << "Hello, " << string << "!\n";

	delete[] string;

	return 0;
}