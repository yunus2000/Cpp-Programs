#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
	fstream m1,m2,m3;
	/*m3.open("text.txt",ios::out);
	if(m3.is_open()){
		string s = "Hello";
		m1 << s;
	}
	m3.close();*/
	
	m1.open("reverseText.txt",ios::out);
	m2.open("text.txt",ios::in);
	string s;
	char c;
	//m2.seekg(0,ios_base::end);
	int l = 0;
	if(m2.is_open()){
		cout << "Reading first time: " << endl;
		while(m2){
			c = m2.get();
			cout << c ;
			s = c;
			l += s.length();
		}
		cout << endl;
	}
	//int l = m2.tellg();
	cout << l << endl;
	
	m2.clear();
	
	m2.seekg(-l,ios::end);
	if(m1.is_open()){
		cout << "\nReading second time: " << endl;
		while(m2){
			c = m2.get();
			m1 << c;
			cout << c;	
		}
	}
	m1.close();
	m2.close();
	
	return 0;
}
