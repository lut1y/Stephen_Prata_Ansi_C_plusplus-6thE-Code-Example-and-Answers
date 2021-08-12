#ifndef QUEUETP_H_
#define QUEUETP_H_
template<class Type>
class QueueTP {
private:
// ����������� ������� �������� ������
    // Node - ��������� ���������, ��������� ��� ������� ������
    struct Node { Type item; struct Node * next;};
    enum {Q_SIZE = 10};
// �������� ����� ������
    Node * front;       // ��������� �� ������ Queue
    Node * rear;        // ��������� �� ����� Queue
    int items;          // ������� ���������� ��������� Queue
    const int qsize;    // ������������ ���������� ��������� Queue
    // ���������� ��� �������������� ��������� �����������
    QueueTP(const QueueTP & q) : qsize(0) {}
    QueueTP & operator=(const QueueTP & q) { return *this; }
public:
    QueueTP(int qs = Q_SIZE); // �������� ������� � ���������� �������� qs
    ~QueueTP();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Type & item); // ���������� �������� � �����
    bool dequeue(Type & item);       // �������� �������� �� ������
};

template<class Type>
QueueTP<Type>::QueueTP(int qs) : qsize(qs) {
    front = rear = NULL;    // ��� nullptr
    items = 0;
}

template<class Type>
QueueTP<Type>::~QueueTP() {
    Node * temp;
    while (front != NULL)   // ���� ������� �� �����
    {
        temp = front;       // ��������� ������ ���������� ��������
        front = front->next;// ������������� ��������� �� ��������� �������
        delete temp;        // �������� ����������� ���������� ��������
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
    Node * add = new Node;  // �������� ����
// ��� ��������� ���������� �������� new ������������ ���������� std::bad_alloc
    add->item = item;       // ��������� ���������� �� ����
    add->next = NULL;       // ��� nullptr;
    items++;
    if (front == NULL)      // ���� ������� �����,
        front = add;        // ������� ���������� � ������
    else
        rear->next = add;   // ����� �� ���������� � �����
    rear = add;             // ��������� ����� ��������� �� ����� ����
    return true;
}

// ��������� �������� front � ���������� item � ��� �������� �� �������
template<class Type> 
bool QueueTP<Type>::dequeue(Type & item) {
    if (front == NULL)
        return false;
    item = front->item;     // � item ��������� ������ ������� �� �������
    items--;
    Node * temp = front;    // ���������� �������������� ������� ��������
    front = front->next;    // ����� ��������� ������ �� ��������� �������
    delete temp;            // �������� ����������� ������� ��������
    if (items == 0)
        rear = NULL;
    return true;
}
#endif
