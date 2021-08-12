#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include <list>
#include <iomanip>
#include <climits>

const int N = INT_MAX/64;
void outint(int n);

int task9() {
	using std::vector;
	using std::list;
	using std::cout;
	using std::endl;
	
	srand(time(0));
	
	cout << "Count values: " << N << endl;
	vector<int> vi0(N);
	for(int i=0; i<N; i++)
		vi0[i] = rand() % N;
	
	vector<int> vi(vi0.begin(), vi0.end());
	list<int> li(vi0.begin(), vi0.end());
	
	cout << "Time of sorting:" << endl;
	cout << std::setw(8) << "Vector";
	cout << "|";
	cout << std::setw(6) << "List";
	cout << "|";
	cout << std::setw(6) << "Copy";
	cout << "|" << endl;
	
	clock_t start = clock();
		sort(vi.begin(), vi.end());
	clock_t end = clock();
	cout << std::setw(8) << std::setprecision(2) 
		<< (double) (end - start)/CLOCKS_PER_SEC;	
		
	cout << "|";
	
	start = clock();
		li.sort();
	end = clock();
	cout << std::setw(6) << std::setprecision(2) 
		<< (double) (end - start)/CLOCKS_PER_SEC;	
	
	copy(vi0.begin(), vi0.end(), li.begin());
	
	cout << "|";
	
	start = clock();
		copy(li.begin(), li.end(), vi.begin());
		sort(vi.begin(), vi.end());
		copy(vi.begin(), vi.end(), li.begin());
	end = clock();
	cout << std::setw(6) << std::setprecision(2) 
		<< (double) (end - start)/CLOCKS_PER_SEC << "|" << endl;
	
//	for_each(li.begin(), li.end(), outint);
	
	
	return 0;
}
