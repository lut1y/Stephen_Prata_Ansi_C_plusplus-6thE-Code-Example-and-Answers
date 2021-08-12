#include <iostream>
#include <string>

#ifndef PERSON_H_
#define PERSON_H_

#include <cstdlib>
using std::string;

class Person {
	private:
		string fname;
		string lname;
	protected:
		virtual void Data() const;	// Для последовательного вывода информации
		virtual void Get();	// последовательный ввод информации
	public:
		Person(string fn="no firstname", string ln="no lastname") 
			: fname(fn), lname(ln) {}
		virtual ~Person() = 0;		
		virtual void Set() = 0;
		virtual void Show() const = 0;
};

class Gunslinger : public virtual Person {
	private:
		double wartime; // время для перехода в БГ 
		int ct_incision; // количество насечек
	protected:
		void Data() const;	// Для последовательного вывода информации
		void Get();	// последовательный ввод информации		
	public:
		Gunslinger() : Person(), wartime(0.0), ct_incision(0) {};
		Gunslinger(const string & fn, const string & ln, 
				double wt = 0.0, int cti = 0) :
			Person(fn, ln), wartime(wt), ct_incision(cti) {};
		Gunslinger(const Person & p, double wt = 0.0, int cti = 0) 
			: Person(p), wartime(wt), ct_incision(cti) {};
		void Set();
		double Draw() { return wartime; }
		void Show() const;
};

class PokerPlayer : public virtual Person {
	private:
		class Card {
			protected:
				enum SUITS {
					diamond,	// бубны
					lubs, 		// трефы
					hearts, 	// черви
					cross 		// крести
				};
				enum {Suits = 4 };
				enum COLORS { black, red };
				enum {Colors = 2 };
			private:
				static char *ps[Suits]; /*= { "diamond", "lubs", 		// трефы
					"hearts", "cross" };*/
				static char *pc[Colors]; /*= {"black", "red"};*/
				int color;
				int suit;
				int num;				
			public:				
				Card() : color(std::rand() % Colors),
					  suit(std::rand() % Suits),
					  num(std::rand() % 51 + 1) {}			
				Card Draw() { return Card(); }
				friend std::ostream & operator<<(std::ostream & os, const Card & card) {
					os << card.num << " " << pc[card.color] << " " << ps[card.suit];
					return os;
				}
		};
//		static char *Card::ps[Card::Suits] = {"diamond", "lubs", "hearts", "cross"};
//		static char *Card::pc[Card::Colors] = {"black", "red"};		
		Card card;
		int numcard;
	protected:
		void Data() const;	// Для последовательного вывода информации
		void Get();	// последовательный ввод информации		
	public:
		PokerPlayer() : Person(), numcard(1) {}
		PokerPlayer(const string & fn, const string & ln, int nc)
			: Person(fn, ln), numcard(nc) {}
		PokerPlayer(const Person & p, int nc) 
			: Person(p), numcard(nc) {}
				
//		int Draw() { numcard = std::rand() % 51 + 1; return numcard; }
		Card Draw() { return card.Draw(); }
		void Set();
		void Show() const;
};

class BadDude : public Gunslinger, public PokerPlayer {
	protected:
		void Data() const;
		void Get();
	public:
		BadDude() {}
		BadDude(const string & fn, const string & ln, 
				double wt = 0.0, int cti = 0, int nc = 1) 
			: Person(fn, ln), Gunslinger(fn, ln, wt, cti), PokerPlayer(fn, ln, nc) {}
		BadDude(const Person & p, double wt = 0.0, int cti = 0, int nc = 1)
			: Person(p), Gunslinger(p, wt, cti), PokerPlayer(p, nc) {}	
		BadDude(const Gunslinger & g, double wt = 0.0, int cti = 0, int nc = 1)
			: Person(g), Gunslinger(g, wt, cti), PokerPlayer(g, nc) {}
		BadDude(const PokerPlayer & pp, double wt = 0.0, int cti = 0, int nc = 1)
			: Person(pp), Gunslinger(pp, wt, cti), PokerPlayer(pp, nc) {}
		
		void Set();
		void Show() const;
		double Gdraw();
		/*int Cdraw();*/
		void Cdraw();
};
#endif
