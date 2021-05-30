#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int find(string l,string s){
	int n1 = l.length();
	int n2 = s.length();
	int n = 0,trig = 0;
	for(int i=0;i<=n1-n2;i++){
		if(l[i] == s[0]){
			trig = 1;
			for(int j=i;j<i+n2;j++){
				if(l[j] == s[j-i]){
					
					n++;
				}
			}
			if(n == n2){
				return 1;
			}
			else{
				n = 0;
			}
		}
	}
	if(trig == 0){
		return 0;
	}
	if(trig == 1 && n == 0){
		return 0;
	}
}

int main(){
	string s,s1;
	cout << "Enter the String needed to be Searched: ";
	cin >> s;
	cout << "Enter the File name: ";
	cin >> s1;
	fstream m(s1.c_str());
	if(m.is_open()){
		string l;
		int trig = 0;
		while(getline(m,l)){
			if(find(l,s)){
				trig = 1;
				cout << "String Present" << endl;
				break;
			}
			trig = 2;
		}
		if(trig == 2){
			cout << "String Not Present" << endl;
		}
	}
	m.close();
	
	return 0;
}
