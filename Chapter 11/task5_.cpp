#include <iostream>
#include "task5.h"

int task5() {
	using std::cout;
	using std::endl;
	
	Stonewt2 incognito = 275; // ������������� ������������ ��� �������������
    Stonewt2 wolfe(285.7);    // �� ��, ��� � Stonewt wolfe = 285.7;
    Stonewt2 taft(21, 8);

    cout << "The celebrity weighed " << std::endl;
    cout << "incognito: " << incognito;
    cout << "wolfe: " << wolfe;    
    cout << "taft: " << taft;    
    
    taft = incognito + wolfe;
    
    cout << "taft: " << taft << endl;
    cout << "taft - wolfe: " << taft - wolfe << endl;
    
    cout << "taft * 2 = " << taft * 2 << endl;
	
	return 0;
}
