// Phone.h
#ifndef PHONE_H
#define PHONE_H

#include <string>

using namespace std;

class Phone {
private:
	string name;
	string phoneNumber;
	string serialNumber;
	string password;
	string* phoneBook;
	int bookSize, bookIdx;

	string encoding( string pw );
	bool isCorrectUser( );
public:

	Phone( string name, string serialNumber, int bookSize );
	Phone( string name, string phoneNumber, string serialNumber, int bookSize );

	~Phone( );

	string getName( );
	bool hasNumber();
	void callTo( Phone* to );
	void printPhonebook( );
	void addPhoneNumber( string number );
	void changePassword( );
	void init();
};

#endif