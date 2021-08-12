// cubes.cpp -- regular and reference arguments
#include <iostream>
double cube(double a);
double refcube(double &ra);
int cubes ()
{
    using namespace std;
    double x = 3.0;

    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refcube(x);
    cout << " = cube of " << x << endl;
    // cin.get();
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refcube(double &ra) // ra - ссылка на x
{
    ra *= ra * ra;
    return ra; 
}
