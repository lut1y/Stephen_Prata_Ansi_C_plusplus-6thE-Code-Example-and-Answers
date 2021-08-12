// equal.cpp -- равенство при присваивании
#include <iostream>
int equal()
{
    using namespace std;
    int quizscores[10] =
        { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "Doing it right:\n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)
        cout << "quiz " << i << " is a 20\n";
// ѕредупреждение: возможно, лучше прочитать об этой программе,
// чем в действительности запускать ее.
    cout << "Doing it dangerously wrong:\n";
    for (i = 0; quizscores[i] = 20; i++)
        cout << "quiz " << i << " is a 20\n";
	// cin.get();
    return 0;
}
