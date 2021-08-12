#ifndef _STACK_H_
#define _STACK_H_
typedef unsigned long Item;

class Stack {
		enum { MAX = 10 };	// константа, специфичная для класса
		Item * pitems;		// хранит элементы стека
		int size;			// количество элементов в стеке
		int top;			// индекс для верхнего элемента стека
	public:
		Stack(int n = MAX);	// создает стек с n элементами
		Stack(const Stack & st);
		~Stack();
		bool isempty() const;
		bool isfull() const;
		// push() возвращает значение false, если стек уже полный,
		// и true в противном случае
		bool push(const Item & item); // добавление элемента в стек
		// pop() возвращает значение false, если стек уже пустой
		// и true в противном случае
		bool pop(Item & item);		// извлечение элемента из стека
		Stack & operator=(const Stack & st);		
};
#endif
