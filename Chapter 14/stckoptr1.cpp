// stkoptr1.cpp -- ������������ ����� ����������
#include <iostream>
#include <cstdlib>     // ��� rand(), srand()
#include <ctime>       // ��� time()
#include "stcktp1.h"
const int Num = 10;
int stckoptr1() {
    std::srand(std::time(0)); // ������������ rand()
    std::cout << "Please enter stack size: ";
    int stacksize;
    std::cin >> stacksize;
// �������� ������� ����� �������� stacksize
    Stack<const char *> st(stacksize); 

// ������� ����
    const char * in[Num] = {
            " 1: Hank Gilgamesh", " 2: Kiki Ishtar",
            " 3: Betty Rocker", " 4: Ian Flagranti",
            " 5: Wolfgang Kibble", " 6: Portia Koop",
            " 7: Joy Almondo", " 8: Xaverie Paprika",
            " 9: Juan Moore", "10: Misha Mache"
            };
 // �������� ����
    const char * out[Num];

    int processed = 0;
    int nextin = 0;	// ���� � �������� ����
    while (processed < Num) {
        if (st.isempty())
            st.push(in[nextin++]);
        else if (st.isfull())
            st.pop(out[processed++]);
        else if (std::rand() % 2  && nextin < Num)   // ����� 50 �� 50
            st.push(in[nextin++]);
        else
            st.pop(out[processed++]);
    }
    for (int i = 0; i < Num; i++)
        std::cout << out[i] << std::endl;

    std::cout << "Bye\n";
    // std::cin.get();
    // std::cin.get();
	return 0; 
}
