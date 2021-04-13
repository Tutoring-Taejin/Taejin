// LinkedList.cpp
class ListNode {
public:
	int val;
	ListNode* next;

	ListNode(): val( 0 ), next( nullptr ) { }
	ListNode( int v ): val( v ), next( nullptr ) { }
	ListNode( int v, ListNode* n ): val( v ), next( n ) { }
};

class LinkedList {
	int size;
	ListNode* head;

public:
	LinkedList();
	LinkedList( const LinkedList& src );
	~LinkedList();
	int size();
	bool empty();
	void print();
	void insert( int val );
	void insert( int val, int position );
	void append( int val );
	ListNode* find( int val );
	void delete_pos( int position );
}

LinkedList::LinkedList( ) {
	size = 0;
	head = nullptr;
}

LinkedList::LinkedList( const LinkedList& src ) {
	// A molang
}

LinkedList::~LinkedList() {
	ListNode* temp;
	for ( ListNode* curr = head; curr; curr = temp ) {
		temp = curr->next;
		delete curr;
	}
}


int LinkedList::size() {
	return size;
}

bool LinkedList::empty( ) {
	return ( size == 0 );
}

void LinkedList::print( ) {
	for ( ListNode* curr = head; curr; curr = curr->next )
		cout << curr->val << "->";
	cout << "NULL\n";
}

void LinkedList::insert( int val ) {
	ListNode* newNode = new ListNode( val, head );
	head = newNode;

}

void LinkedList::insert( int val, int position ) {
	// A molang
}

void LinkedList::append( int val ) {
	ListNode* curr;
	for ( curr = head; curr->next; curr = curr->next );

	ListNode* newNode = new ListNode( val );
	curr->next = newNode;
}

ListNode* LinkedList::find( int val ) {
	for ( ListNode* curr = head; curr; curr = curr->next )
		if ( val == curr->val )
			return curr;
	return nullptr;
}

void LinkedList::delete_pos( int position ) {
	// A molang
}