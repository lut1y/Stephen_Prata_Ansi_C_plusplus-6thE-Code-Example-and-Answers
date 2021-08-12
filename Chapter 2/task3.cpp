#include <iostream>

void thr_bl(void);
void see_h(void);


int task3(void) {
	
	for(int i=0; i<2; i++) thr_bl();
	for(int i=0; i<2; i++) see_h();
	
	return 0;
}

void thr_bl(void) {
	std::cout << "Three blind mice" << std::endl;
}

void see_h(void) {
	std::cout << "See how they run"	 << std::endl;
}
