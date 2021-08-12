#include <iostream>
#include <cstdlib> // для rand() и srand()
#include <ctime>   // для time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // пояивлся ли новый клиент?

int task6() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
	// подготовка
    std::srand(std::time(0));    //  случайная инициализация rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line1(qs);         // очередь может содержать до qs людей
    Queue line2(qs);         // очередь может содержать до qs людей
    

    cout << "Enter the number of simulation hours: ";
    int hours;              //  часы эмуляции
    cin >> hours;
    // эмуляция будет запускать один цикл в минуту
    long cyclelimit = MIN_PER_HR * hours; // количество циклов

    cout << "Enter the average number of customers per hour: ";
    double perhour;         //  среднее количество появлений в час
    cin >> perhour;
    double min_per_cust;    //  среднее время между появлениями
    min_per_cust = MIN_PER_HR / perhour;

    Item temp1;             //  данные нового клиента первой очереди
    Item temp2;             //  данные нового клиента второй очереди
    long turnaways = 0;     //  не допущены в полную очередь
    long customers = 0;     //  присоединены к очереди
    long served = 0;        //  обслужены во время эмуляции
    long sum_line = 0;      //  общая длина очереди
    int wait_time_1 = 0;    //  время освобождения первого банкомата
    int wait_time_2 = 0;    //  время освобождения второго банкомата
    long line_wait = 0;     //  общее время в очереди


// Запуск моделирования
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust)) {  // есть подошедший клиент
            if (line1.isfull()) { // если полная очередь
            	if (line2.isfull())	{
                	turnaways++;   // не допущен
                } else {
                	customers++;		
                	temp2.set(cycle);    // cycle = время прибытия
                	line2.enqueue(temp2); // добавление новичка в очередь
				}
        	} else {
                customers++;		
                temp1.set(cycle);    // cycle = время прибытия
                line1.enqueue(temp1); // добавление новичка в очередь
            }
        }
        if (wait_time_1 <= 0 && !line1.isempty()) { // если у клиент обслужен (или тот отсутствует) и очередь есть
            line1.dequeue(temp1);      	 // обслуживание следующего клиента
            wait_time_1 = temp1.ptime(); // в течение wait_time минут
            line_wait += cycle - temp1.when();
            served++;
        }
        if (wait_time_2 <= 0 && !line2.isempty()) { // если у клиент обслужен (или тот отсутствует) и очередь есть
            line2.dequeue(temp2);      	 // обслуживание следующего клиента
            wait_time_2 = temp2.ptime(); // в течение wait_time минут
            line_wait += cycle - temp2.when();
            served++;
        }
        if (wait_time_1 > 0)
            wait_time_1--;
        if (wait_time_2 > 0)
            wait_time_2--;
        sum_line += line1.queuecount() + line2.queuecount();
    }

// Вывод результатов
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
