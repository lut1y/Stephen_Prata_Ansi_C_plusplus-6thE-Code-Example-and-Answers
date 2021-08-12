#include <iostream>
#include <cstring>

struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

box input_box1(box);
void input_box2(box *);
box input_box(box *, box);

int task3() {
	box b1, b2;
	
//	input_box(b);	
	b1 = input_box(&b1, b2);	
	std::cout << b1.maker << ": " << b1.volume << " = " <<
			b1.height << " x " << b1.width << " x " << b1.length << std::endl;
	
	return 0;
}

box input_box(box *b1, box b2) {
	b2 = input_box1(b2);
	input_box2(b1);
	
	strcat(strcat(b1->maker, " "), b2.maker); 
	b1->height += b2.height;
	b1->length += b2.length;
	b1->width += b2.width;
	b1->volume = b1->height * b1->length * b1->width;
	
	return *b1;	
}

void input_box2(box * b) {
	std::cout << "Enter make: ";
	std::cin.getline(b->maker, 40);
	std::cout << "Enter height: ";
	std::cin >> b->height;
	std::cout << "Enter width: ";
	std::cin >> b->width;
	std::cout << "Enter length: ";
	std::cin >> b->length;
	b->volume = b->height * b->width * b->length;
	while(std::cin.get() != '\n') continue;
	
	std::cout << b->maker << ": " << b->volume << " = " <<
			b->height << " x " << b->width << " x " << b->length << std::endl;
}

box input_box1(box b) {
	std::cout << "Enter make: ";
	std::cin.getline(b.maker, 40);
//	std::cin.ignore();
	std::cout << "Enter height: ";
	std::cin >> b.height;
	std::cout << "Enter width: ";
	std::cin >> b.width;
	std::cout << "Enter length: ";
	std::cin >> b.length;
	b.volume = b.height * b.width * b.length;
	while(std::cin.get() != '\n') continue;
	
	std::cout << b.maker << ": " << b.volume << " = " <<
			b.height << " x " << b.width << " x " << b.length << std::endl;
	return b;
}
