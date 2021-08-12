#include <iostream>
#include <cstdlib> // для rand() и srand()
#include <ctime>   // для time()
#include "person.h"

using std::cout;
using std::cin;
using std::endl;

Person::~Person() {}

void Person::Data() const {
	cout << "First name: " << fname << endl;
	cout << "Last name: " << lname << endl;
}

void Person::Get() {
	getline(cin, fname);
	cout << "Enter person's last name: ";
	getline(cin, lname);	
}

// *** Gunslinger ***
void Gunslinger::Get() {
	cout << "Enter time for war: ";
	cin >> wartime;
	while(cin.get() != '\n') continue;
	cout << "Enter count of incision: ";
	cin >> ct_incision;
	while(cin.get() != '\n') continue;
}

void Gunslinger::Set() {
	cout << "Enter gunslinger's first name: ";
	Person::Get();
	Get();
}

void Gunslinger::Data() const {
	cout << "Time for war: " << wartime << endl;
	cout << "Count of incision: " << ct_incision << endl;
}

void Gunslinger::Show() const {
	cout << "Category: Gunslinger\n";
	Person::Data();
	Data();
}
// ******************

// *** PokerPlayer ***
char * PokerPlayer::Card::ps[PokerPlayer::Card::Suits] 
		= {"diamond", "lubs", "hearts", "cross"};
char * PokerPlayer::Card::pc[PokerPlayer::Card::Colors] 
		= {"black", "red"};

void PokerPlayer::Data() const {
//	cout << "Number of card: " << numcard << endl;
	cout << card << endl;
}

void PokerPlayer::Get() {
	std::srand(std::time(0));	
//	cout << "Take card number: " << PokerPlayer::Draw() << endl;
	Draw();
}

void PokerPlayer::Set() {
	cout << "Enter poker player's first name: ";
	Person::Get();
	Get();
}

void PokerPlayer::Show() const {
	cout << "Category: Poker Player\n";
	Person::Data();
	Data();
}
// *******************

// *** BadDude ***
void BadDude::Data() const {
	Gunslinger::Data();
	PokerPlayer::Data();	
}

void BadDude::Get() {
	Gunslinger::Get();
	PokerPlayer::Get();	
}

void BadDude::Set() {
	cout << "Enter bad dude first name: ";
	Person::Get();
	Get();
}

double BadDude::Gdraw() {
	return Gunslinger::Draw();
}

/*int BadDude::Cdraw() {
	return PokerPlayer::Draw();
}*/

void BadDude::Cdraw() {
	cout << PokerPlayer::Draw();
}

void BadDude::Show() const {
	cout << "Category: Bad Dude\n";
	Person::Data();
	Data();
}
// ***************
