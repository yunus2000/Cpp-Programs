/*#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int to_int(string c){
	stringstream ss;
	ss << c;
	int n;
	ss >> n;
	return n;
}

int main()
{
    /*fstream m;
	m.open("Q4_booksdb.txt",ios::out);
	int *a = new int[20];
	int count = 0;
	if(m.is_open()){
		cout << "File is Opened:" << endl;
		string l;
		while(getline(m,l)){
			cout << l << endl;
			else{
				break;
			}
			if(count = 0){
				count++;
				continue;
			}
			else{
				if(s[1] == " "){
					a[count-1] = to_int(s[0]);
				}
				else{
					a[count-1] = to_int(s[0] + s[1]);
				}
				cout << s[1] << endl;
			}
		}
	}
	else{
		cout << "File not Opened" << endl;
	}
	fstream m;
	m.open("Q1.text.txt",ios::in);
	if(m.is_open()){
		string l;
		while(getline(m,l)){
			cout << l << endl;
		}
	}
	m.close();
	
  return 0;
}*/


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

