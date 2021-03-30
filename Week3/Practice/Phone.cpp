// Phone.cpp
#include <iostream>
#include <string>

#include "Phone.h"

using namespace std;

Phone::Phone( string name, string serialNumber, int bookSize ) {
	cout << "This is constructor1 of " << name << endl;

	this->name = name;
	phoneNumber = "";
	this->serialNumber = serialNumber;
	password = "";
	phoneBook = new string[bookSize];
	this->bookSize = bookSize;
	bookIdx = 0;
}

Phone::Phone( string name, string phoneNumber, string serialNumber, int bookSize ) {
	cout << "This is constructor2 of " << name << endl;

	this->name = name;
	this->phoneNumber = phoneNumber;
	this->serialNumber = serialNumber;
	password = "";
	phoneBook = new string[bookSize];
	this->bookSize = bookSize;
	bookIdx = 0;
}

Phone::~Phone( ) {
	cout << "This is destructor " << name << endl;
	delete[] phoneBook;
}

string Phone::encoding( string pw ) {
	string encodedPW = pw;

	for ( int i = 0; i < pw.size(); i++ )
		encodedPW[i] = (encodedPW[i] - 'a' + 3) % 26 + 'a';

	return encodedPW;
}

string Phone::getName( ) {
	return name;
}

bool Phone::hasNumber( ) {
	return ( phoneNumber != "" );
}

void Phone::callTo( Phone* to ) {
	if ( to->hasNumber() )
		cout << name << " calls to " << to->getName() << endl;
	else
		cout << to->getName() << " doesn\'t have phone number\n";
}

void Phone::printPhonebook() {
	cout << "This is " << name << "\'s phone book" << endl;
	for ( int i = 0; i < bookIdx; i++ )
		cout << phoneBook[i] << endl;
}

void Phone::addPhoneNumber( string number ) {
	if ( bookIdx == bookSize )
		cout << "Capacity of " << name << "\' is full.\n";
	else  {
		phoneBook[bookIdx++] = number;
		cout << "Success to add " << number << " to " << name << "\'s phone book" << endl;
	}
}

bool Phone::isCorrectUser( ) {
	bool correctUser = false;
	if ( password.compare( "" ) != 0 ) {
		int tryPW = 0;
		while ( tryPW < 3 ) {
			string currentPW;
			cout << "Enter your current password(" << tryPW << "): ";
			cin >> currentPW;

			string encodedPW = this->encoding( currentPW );
			if ( encodedPW.compare( password ) == 0 ) {
				correctUser = true;
				break;
			} else {
				cout << "Wrong password!\n";
				tryPW++;
			}
		}
	} else {
		correctUser = true;
	}

	return correctUser;
}

void Phone::changePassword( ) {
	if ( isCorrectUser() ) {
		string newPW, newPW2;

		bool run = true;
		while ( run ) {
			cout << "Enter new password: ";
			cin >> newPW;

			cout << "Retype new password: ";
			cin >> newPW2;

			if ( newPW.compare( newPW2 ) != 0 )
				cout << "Incorrect password!\n";
			else
				run = false;
		}

		password = encoding( newPW );

		cout << "Success to change password\n";
	} else {
		cout << "Sorry, you can\'t change password\n";
	}
}

void Phone::init() {
	cout << "Initialize your phone\n";
	if ( isCorrectUser() ) {
		for ( int i = 0; i < bookIdx; i++ )
			phoneBook[i] = "";

		password = "";

		cout << "Success to initialize this phone\n"; 
	} else {
		cout << "Sorry, you can\'t initialize this phone\n";
	}
}
