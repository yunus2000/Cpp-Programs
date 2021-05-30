#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

struct employee{
	int empno,salary,deptno;
	string name,job;
};

string to_string(int n){
	stringstream ss;
	ss << n;
	string s;
	ss >> s;
	return s;
}

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
	employee e[10];
	string s = "Steve ", str = "Employee ";
	for(int i=0;i<10;i++){
		e[i].empno = i+1;
		e[i].salary = (i+1)*(1000);
		e[i].deptno = 100+i;
		e[i].job = "SDE";
		e[i].name = s + to_string(i+1);
	}
	
	fstream file,file2;
	file.open("Employee_DB.txt",ios::out);
	if(file.is_open()){
		file << "           "<< "Emp.No "<<"  Name "<<"   Salary "<<"   Job "<<" Dept.No "<<endl;
		for(int i=0;i<10;i++){
			if(i == 9){
				file << str + to_string(i+1) << "   " <<e[i].empno << "   " << e[i].name << "   " << e[i].salary<<"   "<<e[i].job << "  "<<e[i].deptno<<endl;
			}
			else{
				file << str + to_string(i+1) << "    " <<e[i].empno << "    " << e[i].name << "    " << e[i].salary<<"     "<<e[i].job << "  "<<e[i].deptno<<endl;
			}
		}
	}
	file.close();
	
	string nm;
	cout << "Enter the name needed to Search: ";
	cin >> nm;
	file2.open("Employee_DB.txt",ios::in);
	if(file2.is_open()){
		string l;
		int trig = 0;
		while(getline(file2,l)){
			if(find(l,nm)){
				trig = 1;
				cout << "\n           "<< "Emp.No "<<"  Name "<<"   Salary "<<" Job "<<" Dept.No "<<endl;
				cout << l << endl;
				break;
			}
			trig = 2;
		}
		if(trig == 2){
			cout << "No Data Found" << endl;
		}
	}
	file2.close();
	
	return 0;
}


