#include <iostream>
#include <cstdlib> // для rand() и srand()
#include <ctime>   // для time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // пояивлся ли новый клиент?

int task5() {
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
    Queue line(qs);         // очередь может содержать до qs людей

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

    Item temp;              //  данные нового клиента
    long turnaways = 0;     //  не допущены в полную очередь
    long customers = 0;     //  присоединены к очереди
    long served = 0;        //  обслужены во время эмуляции
    long sum_line = 0;      //  общая длина очереди
    int wait_time = 0;      //  время освобождения банкомата
    long line_wait = 0;     //  общее время в очереди
    long one_min_client = 0;


// Запуск моделирования
    for (int cycle = 0; cycle < cyclelimit; cycle++) {
        if (newcustomer(min_per_cust)) { // есть подошедший клиент
            if (line.isfull()) // если полная очередь
                turnaways++;   // не допущен
            else {
                customers++;		
                temp.set(cycle);    // cycle = время прибытия
                line.enqueue(temp); // добавление новичка в очередь
            }
        }
        if (wait_time <= 0 && !line.isempty()) { // если клиент обслужен (или тот отсутствует) и очередь есть
            line.dequeue (temp);      // обслуживание следующего клиента
            wait_time = temp.ptime(); // в течение wait_time минут
            if (wait_time == 1) one_min_client++; 
            line_wait += cycle - temp.when();
            served++;
        }        
        
        if (wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();
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
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: "
             << (double) line_wait / served << " minutes\n";
        cout << " average wait time 1 minutes per hour: "
             << one_min_client / hours << "\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done!\n";
    // cin.get();
    // cin.get();
    return 0;
}
