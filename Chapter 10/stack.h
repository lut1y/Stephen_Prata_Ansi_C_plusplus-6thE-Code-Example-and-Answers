// stack.h -- ����������� ������ ��� ������������ ���� ������ - �����
#ifndef STACK_H_
#define STACK_H_

//typedef unsigned long Item;
typedef struct customer {
	char fullname[35];
	double payment;
} Item;

class Stack
{
private:
    enum {MAX = 10};    // ���������, ����������� ��� ������
    Item items[MAX];    // ������ �������� �����
    int top;            // ������ ������� �����
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() ���������� false, ���� ���� �����, � true - � ��������� ������
    bool push(const Item & item);   // �������� ������� � ����
    // pop() ���������� false, ���� ���� ����, � true - � ��������� ������
    bool pop(Item & item);          // ����������� ������� � ������� �����
};
#endif
