#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	fstream m,n1,n2;
	m.open("Q1.text.txt",ios::in);
	n1.open("Q1.even.txt",ios::out);
	n2.open("Q1.odd.txt",ios::out);
	if(m.is_open()){
		int n = 0;
		string l;
		if(n1.is_open() && n2.is_open()){
			while(getline(m,l)){
				if(n%2 == 0){
					n2 << l << endl;
					cout << l << endl;
				}
				else{
					n1 << l << endl;
					cout << l << endl;
				}
				n++;
			}
		}
	}
	m.close();
	n1.close();
	n2.close();
	
	return 0;
}

