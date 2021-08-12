#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using std::vector;

vector<int> Lotto(int ctNumInCard, int ctRandSelectedNum);

int task7() {
	srand(time(0));
	
	vector<int> winners;
	
	winners = Lotto(51, 6);
	
	for(int i=0; i < winners.size(); i++)
		std::cout << winners[i] << " ";	
	
	return 0;
}

vector<int> Lotto(int ctNumInCard, int ctRandSelectedNum) {
	vector<int> allNumbers;
	vector<int> randNum(ctRandSelectedNum);
	
	for(int i=1; i < ctNumInCard; i++)
		allNumbers.push_back(i);
	
	random_shuffle(allNumbers.begin(), allNumbers.end());
	copy(allNumbers.begin(), allNumbers.begin() + ctRandSelectedNum,
		randNum.begin());
	sort(randNum.begin(), randNum.end());	
	
	return randNum;	
}
