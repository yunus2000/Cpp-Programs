#include<iostream>
#include<string>
using namespace std;

int main(){
	while(1){
		string s;
		cout << "Enter Word: " << endl;
		cin >> s;
		int count = 0;
		string s1 = "aeiouAEIOU";
		for(int i=0;i<s.length();i++){
			if(s1.find(s[i]) && s1.find(s[i]) != string::npos){
				count++;
			}
		}
		cout << count;
	}
}
