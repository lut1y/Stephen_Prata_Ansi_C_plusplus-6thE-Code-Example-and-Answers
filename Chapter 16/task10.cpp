#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

namespace TASK10 {
	
	struct Review {
	    std::string title;
	    double price;
	    int rating;
	};
	
	bool operator<(const std::shared_ptr<Review> & r1,
			const std::shared_ptr<Review> & r2);
	bool ratingBooks(const std::shared_ptr<Review> & r1,
			const std::shared_ptr<Review> & r2);
	bool priceBooks(const std::shared_ptr<Review> & r1,
			const std::shared_ptr<Review> & r2);
	bool FillReview(Review & rr);
	void ShowReview(std::shared_ptr<Review> & sp);
}

int task10() {
	using namespace std;
    using namespace TASK10;
    

    vector<shared_ptr<Review> > pbooks;
    
    Review temp;
    while (FillReview(temp)) {
    	shared_ptr<Review> ptemp (new Review);
    	*ptemp = temp;
    	pbooks.push_back(ptemp);
	}	
	
	for_each(pbooks.begin(), pbooks.end(), ShowReview);

    if (pbooks.size() > 0) {
    	
    	cout << "Title order:\n";
    	sort(pbooks.begin(), pbooks.end());
    	for_each(pbooks.begin(), pbooks.end(), ShowReview);
    	
    	cout << "Rating books order:\n";
    	sort(pbooks.begin(), pbooks.end(), ratingBooks);
    	for_each(pbooks.begin(), pbooks.end(), ShowReview);
    	
    	cout << "Price books order:\n";
    	sort(pbooks.begin(), pbooks.end(), priceBooks);
    	for_each(pbooks.begin(), pbooks.end(), ShowReview);
    	
    	cout << "Price books revert order:\n";
    	for_each(pbooks.rbegin(), pbooks.rend(), ShowReview);
    	
    } else
    	cout << "No entries. ";
    cout << "Bye.\n";
    // cin.get();
	return 0;
}

bool TASK10::operator<(const std::shared_ptr<Review> & r1,
			const std::shared_ptr<Review> & r2) {
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool TASK10::priceBooks(const std::shared_ptr<Review> & r1,
			const std::shared_ptr<Review> & r2) {
    if (r1->price < r2->price)
        return true;
    else
        return false;
}

bool TASK10::ratingBooks(const std::shared_ptr<Review> & r1,
			const std::shared_ptr<Review> & r2) {
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool TASK10::FillReview(Review & rr) {
    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin, rr.title);
    if (rr.title == "quit")
        return false;
    std::cout << "Enter book rating: ";
    std::cin >> rr.rating;
    if (!std::cin)
        return false;
    std::cout << "Enter book price: $";
    std::cin >> rr.price;
    if (!std::cin)
        return false;
    // избавиться от остальной части строки ввода
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void TASK10::ShowReview(std::shared_ptr<Review> & sp) {
	std::cout << sp->rating << "\t" << sp->title << "\t$" << sp->price << std::endl; 
}
