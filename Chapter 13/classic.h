#include "cd.h"

#ifndef _CLASSIC_H_
#define _CLASSIC_H_
class Classic : public Cd {
	private:
		char main_composition[50];	// исполнитель
	public:
		Classic(char * s1 = "undefined perfomer",
			char * s2 = "noname artists", 
			char * mc = "noname", int n = 0,
			double x = 0.0);
		Classic(const Cd & d, char * mc = "noname");		
		virtual ~Classic();
		virtual void Report() const;	// выводит все данные о компакт-диске
		Classic & operator=(const Classic & d);
};
#endif
