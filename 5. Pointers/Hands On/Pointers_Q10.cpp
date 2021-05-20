#include<iostream>
using namespace std;

int main()
{
        int list[5]={4,3,6,8,9};
        int *ptr;
        ptr = &list[1];
        cout << *ptr << " " << ptr[0] << endl;
        cout << *(ptr + 1) << " " << *(ptr + 2) << endl;
        return 0;
}


