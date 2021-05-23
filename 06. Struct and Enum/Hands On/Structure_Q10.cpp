#include<iostream>
using namespace std;

struct s_memo{
	int n;
	char c;
};

union u_memo{
	int n;
	char c;
};

int main(){
	s_memo s1,s2;
	u_memo u1,u2;
	
	s1.n = 2;
	s1.c = 'L';
	s2.n = 3;
	s2.c = 'M';
	u1.n = 7;
	u1.c = 'A';
	u2.n = 8;
	u2.c = 'B';
	cout << "Structure Elements: " << endl;
	cout << s1.n << " " << s1.c << endl << s2.n  << " "<< s2.c << endl;
	cout << "\nUnion Elements: " << endl;
	cout << u1.n << " " << u1.c << endl << u2.n  << " "<< u2.c << endl;
	cout << "\nSizes of Structure Instances: " << sizeof(s1) << " " << sizeof(s2) << endl;
	cout << "Sizes of Union Instances: " << sizeof(u1) << " " << sizeof(u2) << endl;
	
	return 0;
}
