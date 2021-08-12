#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>
#include <typeinfo>

namespace TASK5 {
	template <class T>
	int reduce(T ar[], int n);
}
void outint(int n);
void outstring(std::string str);

int task5() {
	using std::string;
	
	int n;
	
	std::cout << "Enter count elements: ";
	std::cin >> n;
	
	long ar[n];
	
	std::srand(std::time(0));
	
	for(int i=0; i < n; i++)
		ar[i] = std::rand() % 10;
		
	std::for_each(ar, ar + n, outint);
	std::cout << std::endl;
	
	std::cout << "New count of sort array is " << TASK5::reduce(ar, n) << " element(s)."
			  << std::endl;
	
	std::cout << std::endl;
	string ar2[6] = {"Hello", "my", "dear", "dear", "friend", "Hello"};
	std::for_each(ar2, ar2 + 6, outstring);
	std::cout << std::endl;	
	std::cout << "New count of sort array is " << TASK5::reduce(ar2, 6) << " element(s)."
			  << std::endl;
	
	return 0;
}

template <class T>
int TASK5::reduce(T ar[], int n) {
	typedef std::vector<T> vect;
	vect sortar(ar, ar+n);
		
	sort(sortar.begin(), sortar.end());
	typename vect::iterator it = unique(sortar.begin(), sortar.end());
	
	vect unic(sortar.begin(), it);	
	
	for(int i=0; i < unic.size(); i++)
		std::cout << unic[i] << " ";
	
	
	std::cout << std::endl;
	return unic.size();
}

void outstring(std::string str) {
	std::cout << str << " ";
}
