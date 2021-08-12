#ifndef _CD_H_
#define _CD_H_
// Базовый класс
class Cd {
	private:
		char perfomers[50];	// исполнитель
		char label[20];		// название
		int selections;		// количество сборников
		double playtime;	// время воспроизведения в минутах
	public:
		Cd(char * s1, char * s2, int n, double x);
		Cd(const Cd & d);
		Cd();
		virtual ~Cd();
		virtual void Report() const;	// выводит все данные о компакт-диске
		Cd & operator=(const Cd & d);
};
#endif
