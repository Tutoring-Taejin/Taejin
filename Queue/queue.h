// queue.h
class Node {
public:
	int val;
	Node* next;

	Node( );
	Node( int v );
};

class Queue {
private:
	Node* head, *tail;
	int queueSize;

public:
	Queue( );

	int front( );
	int back( );
	int size( );
	bool empty();
	void enqueue( int val );
	void dequeue( );
};