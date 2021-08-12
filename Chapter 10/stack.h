// stack.h -- определение класса для абстрактного типа данных - стека
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
    enum {MAX = 10};    // константа, специфичная для класса
    Item items[MAX];    // хранит элементы стека
    int top;            // индекс вершины стека
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() возвращает false, если стек полон, и true - в противном случае
    bool push(const Item & item);   // добавить элемент в стек
    // pop() возвращает false, если стек пуст, и true - в противном случае
    bool pop(Item & item);          // выталкивает элемент с вершины стека
};
#endif
