#include <iostream>

#ifndef TASK4_H_
#define TASK4_H_

namespace SALES { 
	class Sales { 
		private:
			static const int QUARTERS = 4;	
			double sales[QUARTERS]; 
			double average; 
			double max; 
			double min; 
		public:
			
			// Копирует меньшее значение из 4 или п элементов из массива 
			// аr в член sales структуры s, вычисляет и сохраняет 
			// среднее арифметическое, максимальное и минимальное 
			// значения введенных чисел; 
			// оставшиеся элементы sales, если таковые есть, устанавливаются в 0 
//	void setSales (Sales & s, const double ar[], int n); 
			Sales() {
				average = min = max;
				for(int i=0; i<QUARTERS; i++)
					sales[i] = 0.0;
			}

			Sales(const double ar[], int n) {
				int i;				
				for(i=1, min=ar[0], max=ar[0], average=0; i<n && i<QUARTERS; i++) {
					if(ar[i] > max) max = ar[i];
					if(ar[i] < min) min = ar[i];
					average += ar[i];
					sales[i] = ar[i];
				}
				average /= QUARTERS;
			}
			// Интерактивно подсчитывает продажи за 4 квартала, 
			// сохраняет их в члене sales структуры s, вычисляет и 
			// сохраняет среднее арифметическое, а также максимальное 
			// и минимальное значения введенных чисел 
			void setSales(Sales & s) {
				*this = Sales(s.sales, QUARTERS);				
			}
			// Отображает всю информацию из структуры s 
			void showSales() const {
				using std::cout;
				using std::endl;
				
				for(int i=0; i < QUARTERS; i++) {
					cout.setf(std::ios::fixed, std::ios::floatfield);
					cout.precision(2);
					cout << sales[i] << " ";					
				}
				cout << endl << "max: " << max << ", " << "min: " << min << endl;
				cout << "average: " << average << endl;
			}
	};
}
#endif
