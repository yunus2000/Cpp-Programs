#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//
int main(int argc, char *argv[]) {
    string source;
    string destin;
    for(int i=0;i<argc;i++){
    	cout << argv[i] << endl;
	}
    source = argv[1];
    destin = argv[2];
    destin += ".out";

	//string source,destin;
	/*cout << "Enter Source File with Format: ";
	getline(cin,source);
	
	cout << "Enter Dstination File with Format: ";
	getline(cin,destin);
	destin += ".out";*/
	fstream m1(destin.c_str());
	fstream m2(source.c_str());
	string s;
	char c;
	int l = 0;
	if(m2.is_open()){
		cout << "Reading first time: " << endl;
		while(getline(m2,s)){
			m1 << s;
			cout << s <<endl;
		}
	//	cout << endl;
	}
	
	if(m1.is_open()){
		cout << "\nReading second time: " << endl;
		while(getline(m1,s)){
			cout << s << endl;	
		}
	}
	m1.close();
	m2.close();
	
	return 0;
}
