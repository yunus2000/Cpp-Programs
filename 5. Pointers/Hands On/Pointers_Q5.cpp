#include<iostream>
using namespace std;

int n = 20;
int main()
{
        int *ptr = &n;
        cout << *ptr << endl;
        (*ptr)++;
        cout << *ptr;
        return 0;
}


