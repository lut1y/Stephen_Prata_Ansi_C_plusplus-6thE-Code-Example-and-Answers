#include <iostream>
#ifndef _TASK8_H_
#define _TASK8_H_

typedef int Item;

struct Node {
	Item item;
	Node *next;	
};

class UList {
	private:						
		Node *plist; // ссылка на первый член списка
		int elms;
		static const int MAX = 10;
	public:
		UList() {				
			plist = nullptr;				
			elms = 0;
		}
		
		bool isEmpty() const {
			return plist == nullptr;
		}
		
		bool isFull() const {
			return elms == MAX;
		}
		
		bool addItem(Item item) {
			Node * pnew = new Node;
			Node * scan = plist;
			
			if(pnew == nullptr) return false;
			
			pnew->next = nullptr;
			pnew->item = item;
			if(plist == nullptr)
				plist = pnew;
			else {
				while(scan->next != nullptr)
					scan = scan->next;
				scan->next = pnew;	
			}			
			return true;
		}
		
		void visit(void (*pf) (Item & item)) {
			Node * pnode = plist;
			while(pnode != nullptr) {
				(*pf)(pnode->item);
				pnode = pnode->next;
			}
			
		}
		
};
	
#endif
