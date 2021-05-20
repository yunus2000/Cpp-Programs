#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	int a;
	while(cin >> a){
		v.push_back(a);
	}
	for(int i=0;i < v.size(); i++){
		cout << v.at(i) << " ";
	}
}
