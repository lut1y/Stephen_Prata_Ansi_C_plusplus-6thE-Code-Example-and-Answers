#ifndef QUEUETP_H_
#define QUEUETP_H_
template<class Type>
class QueueTP {
private:
// Определение области действия класса
    // Node - вложенная структура, локальная для данного класса
    struct Node { Type item; struct Node * next;};
    enum {Q_SIZE = 10};
// Закрытые члены класса
    Node * front;       // указатель на начало Queue
    Node * rear;        // указатель на конец Queue
    int items;          // текущее количество элементов Queue
    const int qsize;    // максимальное количество элементов Queue
    // объявления для предотвращения открытого копирования
    QueueTP(const QueueTP & q) : qsize(0) {}
    QueueTP & operator=(const QueueTP & q) { return *this; }
public:
    QueueTP(int qs = Q_SIZE); // создание очереди с предельным размером qs
    ~QueueTP();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Type & item); // добавление элемента в конец
    bool dequeue(Type & item);       // удаление элемента из начала
};

template<class Type>
QueueTP<Type>::QueueTP(int qs) : qsize(qs) {
    front = rear = NULL;    // или nullptr
    items = 0;
}

template<class Type>
QueueTP<Type>::~QueueTP() {
    Node * temp;
    while (front != NULL)   // пока очередь не пуста
    {
        temp = front;       // сохраняем адреса начального элемента
        front = front->next;// переустановка указателя на следующий элемент
        delete temp;        // удаление предыдущего начального элемента
    }
}

template<class Type>
bool QueueTP<Type>::isempty() const {
    return items == 0;
}

template<class Type>
bool QueueTP<Type>::isfull() const {
    return items == qsize;
}

template<class Type>
int QueueTP<Type>::queuecount() const {
    return items;
}

template<class Type>
bool QueueTP<Type>::enqueue(const Type & item) {
    if (isfull())
        return false;
    Node * add = new Node;  // создание узла
// при неудачном выполнении операции new генерируется исключение std::bad_alloc
    add->item = item;       // занесение указателей на узлы
    add->next = NULL;       // или nullptr;
    items++;
    if (front == NULL)      // если очередь пуста,
        front = add;        // элемент помещается в начало
    else
        rear->next = add;   // иначе он помещается в конец
    rear = add;             // указатель конца указывает на новый узел
    return true;
}

// помещение элемента front в переменную item и его удаление из очереди
template<class Type> 
bool QueueTP<Type>::dequeue(Type & item) {
    if (front == NULL)
        return false;
    item = front->item;     // в item заносится первый элемент из очереди
    items--;
    Node * temp = front;    // сохранение местоположения первого элемента
    front = front->next;    // сдвиг указателя начала на следующий элемент
    delete temp;            // удаление предыдущего первого элемента
    if (items == 0)
        rear = NULL;
    return true;
}
#endif
