// queueMain.cpp
#include <iostream>

#include "queue.h"

using namespace std;

int main(void) {
	Queue q;

	q.enqueue( 1 );
	q.enqueue( 2 );
	q.enqueue( 3 );

	cout << q.size() << endl;
	cout << q.front() << ' ' << q.back() << endl;

	q.dequeue();
	q.dequeue();
	cout << q.front() << ' ' << q.back() << endl;
	cout << q.empty() << endl;

	q.dequeue();
	cout << q.empty() << endl;

	q.dequeue();
	cout << q.front() << ' ' << q.back() << endl;

	q.enqueue( 4 );
	cout << q.front() << ' ' << q.back() << endl;

	q.enqueue( 5 );
	cout << q.front() << ' ' << q.back() << endl;	

	return 0;
}