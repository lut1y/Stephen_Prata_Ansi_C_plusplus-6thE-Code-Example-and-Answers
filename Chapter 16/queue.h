// queue.h -- интерфейс для очереди
#ifndef QUEUE_H_
#define QUEUE_H_
// очередь содержащая элементы Customer
class Customer {
private:
    long arrive;        // время прибытия клиента
    int processtime;    // время (длительность) обслуживания клиента
public: 
    Customer() : arrive(0), processtime (0) {}
    void set(long when); // устанавливает время прибытия клиента
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};

typedef Customer Item;

class Queue {
private:
// Определение области действия класса
    // Node - вложенная структура, локальная для данного класса
    struct Node { Item item; struct Node * next;};
    enum {Q_SIZE = 10};
// Закрытие члены класса
    Node * front;       // указатель на начало Queue
    Node * rear;        // указатель на конец Queue
    int items;          // текущее количество элементов Queue
    const int qsize;    // максимальное количество элементов Queue
    // объявления для предотвращения открытого копирования
    Queue(const Queue & q) : qsize(0) {}
    Queue & operator=(const Queue & q) { return *this;}
public:
    Queue(int qs = Q_SIZE); // создание очереди с предельным размером qs
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item &item); // добавление элемента в конец
    bool dequeue(Item &item);       // удаление элемента из начала
};
#endif

