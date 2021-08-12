#include <iostream>
#include <cstring>

#ifndef _GOLF_H_
#define _GOLF_H_

class Golf {
	private:
		static const int Len = 40;
		char fullname[Len];
		int handicap;
	public:		
		Golf(const char * name = "", int hc = 0) {
			strcpy(fullname, name);
			handicap = hc;
		}		
		int setgolf(Golf & g) {
			*this = Golf(g.fullname, g.handicap);			
			if(this->fullname == 0) return 0;
			else return 1;
		}		
		void showgolf() const {
			std::cout << this->fullname << ": " << this->handicap << std::endl;
		}
};


#endif
