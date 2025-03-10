#include <iostream>
using namespace std;

int mike_sucks(int n);

int main()
{
    int n = 100;
    mike_sucks(n);
}

int mike_sucks(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        cout << "mike sucks" << endl;
        return mike_sucks(n-1);
    }
}