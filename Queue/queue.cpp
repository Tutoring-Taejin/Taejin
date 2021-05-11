// queue.cpp
#include <iostream>

#include "queue.h"

Node::Node( ) {
	val = 0;
	next = nullptr;
}

Node::Node( int v ) {
	val = v;
	next = nullptr;
}

Queue::Queue( ) {
	head = nullptr;
	tail = nullptr;
	queueSize = 0;
}

void Queue::enqueue( int val ) {
	Node* newNode = new Node( val );
	if ( this->empty() ) {
		head = newNode;
		tail = newNode;
	} else {
		tail->next = newNode;
		tail = newNode;
	}
	queueSize++;
}

void Queue::dequeue( ) {
	if ( !this->empty() ) {
		Node* removeNode = head;
		head = head->next;
		if ( removeNode == tail )
			tail = nullptr;

		delete removeNode;

		queueSize--;
	}
}

int Queue::front( ) {
	if ( !this->empty() )
		return head->val;
	else
		return -1;
}

int Queue::back( ) {
	if ( !this->empty() )
		return tail->val;
	else
		return -1;
}

bool Queue::empty() {
	return (head == nullptr && tail == nullptr);
}

int Queue::size( ) {
	return queueSize;
}
