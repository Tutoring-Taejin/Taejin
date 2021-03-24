// OOP_Practice2.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[20];
	char device[20];
	char number[20];
} Phone;

Phone* ConstructPhone1( char name[], char device[] );
Phone* ConstructPhone2( char name[], char device[], char number[] );
void DestructPhone( Phone* phone );
void PrintInfo( Phone* phone );
bool HasNumber( Phone* phone );
void CallsTo( Phone* from, Phone* to );

int main(void) {
	Phone* taejinPhone1 = ConstructPhone1( "Taejin", "Galaxy Note 10+", "010-6373-7824" );
	Phone* taejinPhone2 = ConstructPhone1( "Taejin", "Iphone 8", "010-6373-7824"  );
	Phone* yejinPhone1 = ConstructPhone1( "Yejin", "Iphone 8", "010-8745-4509" );
	Phone* yejinPhone2 = ConstructPhone2( "Yejin", "Ipad Air" );

	PrintInfo( taejinPhone1 );
	PrintInfo( taejinPhone2 );
	PrintInfo( yejinPhone1 );
	PrintInfo( yejinPhone2 );

	CallsTo( taejinPhone2, yejinPhone1 );
	CallsTo( taejinPhone2, yejinPhone2 );

	DestructPhone( taejinPhone1 );
	DestructPhone( taejinPhone2 );
	DestructPhone( yejinPhone1 );
	DestructPhone( yejinPhone2 );

	return 0;
}