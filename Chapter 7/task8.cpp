#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
const char* Snames8[Seasons] =
    {"Spring", "Summer", "Fall", "Winter"};
    
struct expence {
	double exp;
};

void fill(expence * pa, int n);
void show(expence da[], int n);
int task8()
{
    expence expenses[Seasons];
    fill(expenses, Seasons);
    show(expenses, Seasons);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(expence * pa, int n)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames8[i] << " expenses: ";
        std::cin >> pa[i].exp;
    }
}

void show(expence da[], int n)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames8[i] << ": $" << da[i].exp << '\n';
        total += da[i].exp;
    }
    std::cout << "Total: $" << total << '\n';
}
