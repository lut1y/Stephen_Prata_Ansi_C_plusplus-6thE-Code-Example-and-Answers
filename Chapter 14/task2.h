#ifndef TASK2_H_
#define TASK2_H_

#include <iostream>
#include <valarray>
#include <string>
#include "pairs.h"

namespace TASK2 {
	class Wine : private std::string, 
			private Pair<std::valarray<int>, std::valarray<int>>,
			private std::valarray<int> {
		private:
			typedef std::valarray<int> ArrayInt;
			typedef Pair<ArrayInt, ArrayInt> PairArray;		
			
		public:
			// Инициализация label зачением l, количество лет - y
			// годы урожая - yr[], количество бутылок - bot[]
			Wine(const char * l, int y, const int yr[], const int bot[])
					: std::string(l), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) {};
			// Инициализация label значением l, количество лет - y,
			// создаются объекты массива размером y
			Wine(const char * l, int y) :
					std::string(l), PairArray(ArrayInt(y), ArrayInt(y)) {};
			~Wine() {}			
			void GetBottles();
			int sum();
			void Show();			
			const std::string & Label() const;			
	};
}
#endif
