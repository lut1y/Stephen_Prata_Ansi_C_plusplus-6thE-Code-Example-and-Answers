#include <iostream>
#include "task1.h"

int task1() {
	
	using namespace TASK1;
	Tv s43;
	
	s43.settings();
	s43.onoff();
	s43.settings();
	
	Remote rem;
	
	rem.showmode();
	rem.set_mode();
	rem.showmode();
	
	s43.buzz(rem);
	rem.showmode();
	
	s43.volup();
	s43.settings();
	
	s43.onoff();
	s43.settings();
	
	s43.buzz(rem);
	rem.showmode();
	
	
	return 0;
}
