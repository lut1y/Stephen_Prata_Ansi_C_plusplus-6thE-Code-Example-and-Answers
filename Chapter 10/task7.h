#include <cstring>

#ifndef _TASK7_H_
#define _TASK7_H_

class Plorg {
	private:
		char name[20];
		int CI;
	public:
		Plorg(const char name[] = "Plorga", int CI = 50) {
			strcpy(this->name, name);  this->CI = CI;
		}
		void setCI(int CI) {
			this->CI = CI;
		}
		void showPlorg() const {
			std::cout << name << ": " << CI << "." << std::endl;
		}
};

#endif
