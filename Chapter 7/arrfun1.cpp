// arrfun1.cpp -- ������� � ����������-��������
#include <iostream>
const int ArSize = 8;
int sum_arr_1(int arr[], int n);        // ��������
int arrfun1()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
// ��������� ������� ������� ���������� int ������ static,
// ����� ��������� ������������� �������

    int sum = sum_arr_1(cookies, ArSize);
    cout << "Total cookies eaten: " << sum <<  "\n";
    // cin.get();
    return 0;
}

// ���������� ����� ��������� ������� ����� �����
int sum_arr_1(int arr[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total; 
}
