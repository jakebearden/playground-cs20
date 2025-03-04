#include <iostream>
using namespace std;

int subtract(int a, int b);

int main()
{
    int a, b;
    cout << "Enter number 1: ";
    cin >> a;

    cout << "Enter number 2: ";
    cin >> b;

    cout << a << " - " << b << " = " << subtract(a,b) << endl;
}

int subtract(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else if (b < 0)
    {
        return subtract(a+1, b+1);
    }
    else
    {
        return subtract(a-1, b-1);
    }
    
}