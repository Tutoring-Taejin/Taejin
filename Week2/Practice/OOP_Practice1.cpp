// OOP_Practice1.cpp
#include <iostream>
#include <string>

using namespace std;

void PrintDivide() {
	cout << "====================\n";
}

class Phone {
private:
	string name, device, number;

public:
	Phone( string name, string device );
	Phone( string name, string device, string number );
	~Phone();

	void printInfo( );
	string getName();
	string getDevice();
	bool hasNumber( );
	void callsTo( Phone to );
};

int main(void) {
	Phone* taejinPhone1 = new Phone( "Taejin", "Galaxy Note 10+", "010-6373-7824" );
	Phone* taejinPhone2 = new Phone( "Taejin", "Iphone 8", "010-6373-7824" );
	Phone* yejinPhone1 = new Phone( "Yejin", "Iphone 8", "010-8745-4508" );
	Phone* yejinPhone2 = new Phone( "Yejin", "Ipad Air" );

	taejinPhone1->printInfo();
	taejinPhone2->printInfo();
	yejinPhone1->printInfo();
	yejinPhone2->printInfo();

	taejinPhone2->callsTo( *yejinPhone1 );
	taejinPhone2->callsTo( *yejinPhone2 );

	// cout << taejinPhone1->name << "\'s " << taejinPhone1->device << " is gone" << endl;
	cout << taejinPhone1->getName() << "\'s " << taejinPhone1->getDevice() << " is gone" << endl;

	delete taejinPhone1;

	delete taejinPhone2;
	delete yejinPhone1;
	delete yejinPhone2;

	return 0;
}

Phone::Phone( string name, string device ) {
	cout << "This is 1st constructor and I will make " << name << "\'s phone\n";
	cout << "My parameter is name and device\n";
	PrintDivide();

	this->name = name;
	this->device = device;
	this->number = "";
}

Phone::Phone( string name, string device, string number ) {
	cout << "This is 2nd constructor and I will make " << name << "\'s phone\n";
	cout << "My parameter is name, device, number\n";
	PrintDivide();

		this->name = name;
		this->device = device;
		this->number = number;
}

Phone::~Phone( ) {
	cout << "This is Destructor\n";
	cout << "Bye bye phone " << this->device << endl;
	PrintDivide();
}

void Phone::printInfo( ) {
	cout << "Name: " << this->name << endl;
	cout << "Device: " << this->device << endl;
	cout << "Number: " << this->number << endl;
	PrintDivide();
}

string Phone::getName() {
	return this->name;
}

string Phone::getDevice() {
	return this->device;
}

bool Phone::hasNumber() {
	return this->number == "";
}

void Phone::callsTo( Phone to ) {
	if ( to.hasNumber() )
		cout << this->getName() << " calls to " << to.getName() << endl;
	else
		cout << "Sorry, " << to.getName() << "\'s phone(" << to.getDevice() << ") does not have Number\n";
	PrintDivide();
}