#include <iostream>
#include <set>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <iterator>

int reduce(long ar[], int n);
void outint(int n);/* {std::cout << n << " ";}*/

int task4() {
	int n;
	
	std::cout << "Enter count elements: ";
	std::cin >> n;
	
	long ar[n];
	
	std::srand(std::time(0));
	
	for(int i=0; i < n; i++)
		ar[i] = std::rand() % 10;
		
	std::for_each(ar, ar + n, outint);
	std::cout << std::endl;
	
	std::cout << "New count of sort array is " << reduce(ar, n) << " element(s)."
			  << std::endl;
	
	
	return 0;
}

int reduce(long ar[], int n) {	
	/*std::set<long> unic(ar, ar + n);	
	std::for_each(unic.begin(), unic.end(), outint);
	std::cout << std::endl;
	return unic.size();	*/
	
	std::vector<long> sortar(ar, ar+n);	
		
	sort(sortar.begin(), sortar.end());
	std::vector<long>::iterator it = unique(sortar.begin(), sortar.end());
	
	std::vector<long> unic(sortar.begin(), it);	
	std::for_each(unic.begin(), unic.end(), outint);	
	
	std::cout << std::endl;
	return unic.size();
}
