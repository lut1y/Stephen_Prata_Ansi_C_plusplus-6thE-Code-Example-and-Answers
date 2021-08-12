// assgn_st.cpp -- присваивание структур
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int assgn_st()
{
    using namespace std;
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet;  // присваивание одной структуры другой
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    // cin.get();
    return 0; 
}
