// ifelse.cpp -- использование оператора if else
#include <iostream>
int ifelse()
{
    char ch;

    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch;     // выполнение в случае символа новой строки
        else
            std::cout << ++ch;   // выполнение в противном случае
        std::cin.get(ch);
    }
// попробуйте ch + 1 вместо ++ch, чтобы увидеть интересный эффект
    std::cout << "\nPlease excuse the slight confusion.\n";
	// std::cin.get();
	// std::cin.get();
    return 0;
}
