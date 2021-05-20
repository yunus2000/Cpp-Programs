#include<iostream>
using namespace std;

void weight(string &s,int n){
	int count = 0;
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			if(n == 1){
				count += int(s[i]) - 96;
			}
			if(n == 0){
				if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
					count += int(s[i]) - 96;
				}
			}
		}
	}
	cout << "\n" <<count;
}

int main(){
	string s,s1 = "";
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		s1 += tolower(s[i]);
	}
	int n;
	cin >> n;
	weight(s1,n);
	
	return(0);
}
