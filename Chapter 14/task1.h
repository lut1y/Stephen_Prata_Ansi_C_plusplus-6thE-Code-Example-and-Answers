#ifndef TASK1_H_
#define TASK1_H_

#include <valarray>
#include "pairs.h"
namespace TASK1 {
	class Wine {
	private:			
		typedef std::valarray<int> ArrayInt;
		typedef Pair<ArrayInt, ArrayInt> PairArray;
		// 		Pair<��� ����� ���������, ���������� �������>
		std::string label;
		PairArray stocks; // ������ 
		int years;	
		
	public:
		// ������������� label �������� l, ���������� ��� - y
		// ���� ������ - yr[], ���������� ������� - bot[]
		Wine(const char * l, int y, const int yr[], const int bot[])
			: label(l), years(y), stocks(ArrayInt(yr, y), ArrayInt(bot, y)) {}
			
		// ������������� label ��������� l, ���������� ��� - y,
		// ��������� ������� ������� �������� y
		Wine(const char * l, int y) : label(l), years(y),
				  stocks(ArrayInt(y), ArrayInt(y)) {}
		void GetBottles();
		const std::string & Label() const;
		int sum();
		void Show();	
	
	};
}
#endif
