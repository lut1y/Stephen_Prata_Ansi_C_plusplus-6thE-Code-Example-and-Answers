#include <iostream>

struct CandyBar {
	char *boxname;
	double weight;
	int cal;
};

void fillstruct(CandyBar & cbar, char *namebox = "Millennium Munch",
		double weight = 2.85, int cal = 350);

void printstruct(const CandyBar & cbar);

int task2() {
	CandyBar cbar;
	fillstruct(cbar);
	printstruct(cbar);
	
	fillstruct(cbar, "Alpenhold", 1.5, 200);
	printstruct(cbar);
	
	return 0;
}

void fillstruct(CandyBar & cbar, char *namebox, double weight, int cal) {
	cbar.boxname = namebox;
	cbar.weight = weight;
	cbar.cal = cal;
}

void printstruct(const CandyBar & cbar) {
	std::cout << cbar.boxname << ": " << cbar.weight << " kg, "
			<< cbar.cal << " ccal." << std::endl;
}
