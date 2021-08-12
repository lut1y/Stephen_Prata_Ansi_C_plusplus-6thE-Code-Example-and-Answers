#include <iostream>
#include <cstdlib> // ��� rand() � srand()
#include <ctime>   // ��� time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // �������� �� ����� ������?

int task6() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
	// ����������
    std::srand(std::time(0));    //  ��������� ������������� rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line1(qs);         // ������� ����� ��������� �� qs �����
    Queue line2(qs);         // ������� ����� ��������� �� qs �����
    

    cout << "Enter the number of simulation hours: ";
    int hours;              //  ���� ��������
    cin >> hours;
    // �������� ����� ��������� ���� ���� � ������
    long cyclelimit = MIN_PER_HR * hours; // ���������� ������

    cout << "Enter the average number of customers per hour: ";
    double perhour;         //  ������� ���������� ��������� � ���
    cin >> perhour;
    double min_per_cust;    //  ������� ����� ����� �����������
    min_per_cust = MIN_PER_HR / perhour;

    Item temp1;             //  ������ ������ ������� ������ �������
    Item temp2;             //  ������ ������ ������� ������ �������
    long turnaways = 0;     //  �� �������� � ������ �������
    long customers = 0;     //  ������������ � �������
    long served = 0;        //  ��������� �� ����� ��������
    long sum_line = 0;      //  ����� ����� �������
    int wait_time_1 = 0;    //  ����� ������������ ������� ���������
    int wait_time_2 = 0;    //  ����� ������������ ������� ���������
    long line_wait = 0;     //  ����� ����� � �������


// ������ �������������
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust)) {  // ���� ���������� ������
            if (line1.isfull()) { // ���� ������ �������
            	if (line2.isfull())	{
                	turnaways++;   // �� �������
                } else {
                	customers++;		
                	temp2.set(cycle);    // cycle = ����� ��������
                	line2.enqueue(temp2); // ���������� ������� � �������
				}
        	} else {
                customers++;		
                temp1.set(cycle);    // cycle = ����� ��������
                line1.enqueue(temp1); // ���������� ������� � �������
            }
        }
        if (wait_time_1 <= 0 && !line1.isempty()) { // ���� � ������ �������� (��� ��� �����������) � ������� ����
            line1.dequeue(temp1);      	 // ������������ ���������� �������
            wait_time_1 = temp1.ptime(); // � ������� wait_time �����
            line_wait += cycle - temp1.when();
            served++;
        }
        if (wait_time_2 <= 0 && !line2.isempty()) { // ���� � ������ �������� (��� ��� �����������) � ������� ����
            line2.dequeue(temp2);      	 // ������������ ���������� �������
            wait_time_2 = temp2.ptime(); // � ������� wait_time �����
            line_wait += cycle - temp2.when();
            served++;
        }
        if (wait_time_1 > 0)
            wait_time_1--;
        if (wait_time_2 > 0)
            wait_time_2--;
        sum_line += line1.queuecount() + line2.queuecount();
    }

// ����� �����������
    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit / 2 << endl;
        cout << " average wait time: "
             << (double) line_wait / served / 2 << " minutes\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done!\n";
    // cin.get();
    // cin.get();
    return 0;
}
