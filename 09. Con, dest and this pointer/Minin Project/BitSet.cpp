#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class bitset{
	private:
		int n;
		string s;
	public:
		bitset(int size){
			n = size;
			s = string(n,'0');
		}
		
		void setbit(int indx){
			int i = n - indx -1;
			s.replace(i,1,"1");
		}
		
		void setbit(int indx,int val){
			int i = n - indx - 1;
			stringstream ss;
			ss << val;
			string s1;
			ss >> s1;
			s.replace(i,1,s1);
		}
		
		void clearbit(int indx){
			int i = n - indx - 1;
			s.replace(i,1,"0");
		}
		
		void togglebit(int indx){
			int i = n - indx - 1;
			if(s.at(i) == '0'){
				s.replace(i,1,"1");
			}
			else{
				s.replace(i,1,"0");
			}
		}
		
		void getbit(int indx){
			int i = n - indx - 1;
			cout << s.at(i) << endl;
		}
		
		void print(){
			cout << s << endl;
		}
};

int main(){
	int n;
	cout << "Enter the BitSize required: ";
	cin >> n;
	bitset b(n);
	b.print();
	b.setbit(0,1);
	b.print();
	b.setbit(2);
	b.print();
	b.getbit(4);
	b.togglebit(4);
	b.print();
	
	return 0;
}
