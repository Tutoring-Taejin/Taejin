// HeapSegment_Prac2.cpp
#include <iostream>

#define MAX_SIZE 10'000

using namespace std;

int main(void) {
	int** matrix = new int*[MAX_SIZE];
	for ( int i = 0; i < MAX_SIZE; i++ )
		matrix[i] = new int[MAX_SIZE];

	for ( int i = 0; i < MAX_SIZE; i++ )
		for ( int j = 0; j < MAX_SIZE; j++ )
			matrix[i][j] = i * j;

	for ( int i = 0; i < MAX_SIZE; i++ )
		delete[] matrix[i];
	delete[] matrix;

	cout << "Successfully Done\n";

	return 0;
}