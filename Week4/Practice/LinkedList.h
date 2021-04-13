// LinkedList.cpp

struct ListNode {
	int val;
	ListNode* next;
};

class LinkedList {
private:
	int size;
	ListNode* head;

public:
	LinkedList();
	~LinkedList();

	void insertion( int val, int position );

	int operator[]( int position );
	int find( int position );
	
	void deletion( int position );

	int size( void );
};
