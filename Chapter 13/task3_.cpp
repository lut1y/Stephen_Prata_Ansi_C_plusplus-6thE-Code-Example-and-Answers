#include <iostream>
#include <string>
#include "task3.h"
const int COUNTS = 4;

int task3() {
   using std::cin;
   using std::cout;
   using std::endl;

   BaseABC * entities[COUNTS];
   char templabel[80];
   int temprating;
   
   char kind;

   for (int i = 0; i < COUNTS; i++) {
       cout << "Enter label: ";
       cin.get(templabel, 80);
       cout << "Enter rating: ";
       cin >> temprating;       
       cout << "Enter 1 for baseDMA or "
            << "2 for lacksDMA or 3 for hasDMA Account: ";
       while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
           cout <<"Enter either 1, 2 or 3: ";
       if (kind == '1')
           entities[i] = new baseDMA3(templabel, temprating);
       else if(kind == '2') {
       	   char tempcolor[40];
       	   
       	   while (cin.get() != '\n') continue;
       	   cout << "Enter color: ";
       	   cin.get(tempcolor, 40);
       	   
       	   entities[i] = new lacksDMA3(tempcolor, templabel, temprating);
	   } else {
	   	   char tempstyle[80];
	   	   
	   	   while (cin.get() != '\n') continue;
           cout << "Enter style: ";
           cin.get(tempstyle, 80);           
           entities[i] = new hasDMA3(tempstyle, templabel, temprating);
        }
        while (cin.get() != '\n')
            continue;
   }
   cout << endl;
   for (int i = 0; i < COUNTS; i++) {
       entities[i]->View();
       cout << endl;
   }
              
   for (int i = 0; i < COUNTS; i++)
   {
       delete entities[i];  // free memory
   }
   cout << "Done.\n";         
 
   return 0; 
}
