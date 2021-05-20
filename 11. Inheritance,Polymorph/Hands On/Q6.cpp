#include<iostream>
#include<cstring>
using namespace std;

class sample{
	private:
		int i;
		string s;
		
	public:
		sample(int in,string st){
			i = in;
			s = st;
		}
		
		char charat(int k){
			return(s.at(k));
		}
		
		string reverse(){
			string str = "";
			for(int i=s.length()-1;i>=0;i--){
				str += s.at(i);
			}
			return(str);
		}
};

int main(){
	sample s(6,"What is this");
	cout << "Char at 6th position is: " << s.charat(6) << endl;
	cout << "Reverse String:" << s.reverse();
	return(0);
}
