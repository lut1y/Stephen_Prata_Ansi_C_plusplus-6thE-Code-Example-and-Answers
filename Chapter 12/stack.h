#ifndef _STACK_H_
#define _STACK_H_
typedef unsigned long Item;

class Stack {
		enum { MAX = 10 };	// ���������, ����������� ��� ������
		Item * pitems;		// ������ �������� �����
		int size;			// ���������� ��������� � �����
		int top;			// ������ ��� �������� �������� �����
	public:
		Stack(int n = MAX);	// ������� ���� � n ����������
		Stack(const Stack & st);
		~Stack();
		bool isempty() const;
		bool isfull() const;
		// push() ���������� �������� false, ���� ���� ��� ������,
		// � true � ��������� ������
		bool push(const Item & item); // ���������� �������� � ����
		// pop() ���������� �������� false, ���� ���� ��� ������
		// � true � ��������� ������
		bool pop(Item & item);		// ���������� �������� �� �����
		Stack & operator=(const Stack & st);		
};
#endif
