#include<iostream>
using namespace std;

int main()
{
        int x[] = { 2, 4, 6, 8, 10, 12 };
        int *ptr, y;
        ptr  = x + 4;
        y = *ptr - x[0];
        cout << y << endl;
        return 0;
}

