#ifndef _TASK2_H_
#define _TASK2_H_

using std::string;

class Person {
	private:
		static const int LIMIT = 25;
		string lname;	// фамилия
		char fname[LIMIT];	// имя
	public:
		Person() {
				lname = ""; fname[0] = '\0'; }
		Person(const string & ln, const char *fn = "Heyyou");
		
		// Следующие методы отображают lname и fname
		void Show() const;			// формат: имя фамилия
		void FormalShow() const;	// формат: фамилия, имя		
};	 
#endif
