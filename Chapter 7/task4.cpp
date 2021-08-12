#include <iostream>
const int MAIN_FIELD = 47;
const int MEGA_FIELD = 27;
// Примечание: некоторые реализации требуют применения double вместо long double
long double probability4(unsigned numbers, unsigned picks);
int task4()
{
    using namespace std;
    long double choices = probability4(MAIN_FIELD, 5);
    long double megaNum = probability4(MEGA_FIELD, 1);
    cout << "Chance to win is " << choices * megaNum << endl;    
    
    cout << "bye\n";
    // cin.get();
    // cin.get();
    return 0;
}

// Следующая функция вычисляет вероятность правильного
// угадывания picks чисел из numbers возможных 
long double probability4(unsigned numbers, unsigned picks)
{
    long double result = 1.0;  // несколько локальных переменных
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 
    return result;
}
