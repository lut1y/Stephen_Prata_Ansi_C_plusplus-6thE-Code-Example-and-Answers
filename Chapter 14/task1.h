#ifndef TASK1_H_
#define TASK1_H_

#include <valarray>
#include "pairs.h"
namespace TASK1 {
	class Wine {
	private:			
		typedef std::valarray<int> ArrayInt;
		typedef Pair<ArrayInt, ArrayInt> PairArray;
		// 		Pair<год сбора винограда, количество бутылок>
		std::string label;
		PairArray stocks; // запасы 
		int years;	
		
	public:
		// Инициализация label зачением l, количество лет - y
		// годы урожая - yr[], количество бутылок - bot[]
		Wine(const char * l, int y, const int yr[], const int bot[])
			: label(l), years(y), stocks(ArrayInt(yr, y), ArrayInt(bot, y)) {}
			
		// Инициализация label значением l, количество лет - y,
		// создаются объекты массива размером y
		Wine(const char * l, int y) : label(l), years(y),
				  stocks(ArrayInt(y), ArrayInt(y)) {}
		void GetBottles();
		const std::string & Label() const;
		int sum();
		void Show();	
	
	};
}
#endif
