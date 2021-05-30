#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	fstream m1,m2,file;
	string c,l,s;
	cout << "Enter the Delimiter Either 'TAB' or '#': ";
	cin >> c;
	if(c == "TAB"){
		c = "	";
	}
	m1.open("Q2.string1.txt",ios::in);
	m2.open("Q2.string2.txt",ios::in);
	file.open("Q2.final.txt",ios::out);
	if(m1.is_open() && m2.is_open()){
		while(getline(m1,l)){
			if(getline(m2,s)){
				file << l << c << s << endl;
				cout << l + c + s << endl;
			}
			else{
				file << l << c << endl;
				cout << l + c  << endl;
			}
		}
	}
	m1.close();
	m2.close();
	file.close();
	
	return 0;
}
