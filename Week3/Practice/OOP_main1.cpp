// OOP_main1.cpp
#include <iostream>

#include "Phone.h"

using namespace std;

void PrintDivision( ) {
	for ( int i = 0; i < 20; i++ )
		cout << "=";
	cout << endl;
}

int main(void) {


	Phone phone1( "Taejin1", "010-6373-7824", "abcd", 5 );
	Phone* phone2 = new Phone( "Taejin2", "010-6373-7824-2", "abcd-2", 5 );
	Phone* phone3 = new Phone( "Taejin3", "bcde", 5 );

	phone1.addPhoneNumber( "010-8745-4509" );

	phone1.printPhonebook();

	phone2->addPhoneNumber( "010-8745-4509-2" );

	phone2->printPhonebook();

	phone1.callTo( phone2 );

	phone2->changePassword( );

	phone2->changePassword( );

	phone2->changePassword( );

	delete phone2;
	delete phone3;

	return 0;
}