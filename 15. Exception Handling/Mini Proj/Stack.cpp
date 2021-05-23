#include<iostream>
#include<string>
#include<exception>
using namespace std;

class StackFull{
	public:
		const char* what(){
			return "Stack is Full!!";
		}
};

class StackEmpty{
	public:
		const char* what(){
			return "Stack is Empty!!";
		}
};

class stack{
	private:
		string *s = NULL;
		int top;
		int size;
		
	public:
		stack(int n){
			s = new string[n];
			top = 0;
			size = n;
		}
		
		void push(const string& s1){
			if(top == size){
				StackFull skf;
				throw skf;
			}
			else{
				s[top] = s1;
				top++;
			}
		}
		
		void pop(){
			if(top == 0){
				StackEmpty ske;
				throw ske;
			}
			else{
				int n = top - 1;
				cout << "Poped Element from Stack is: " << s[n] << endl;
				top--;
			}
		}
		
		void Top(){
			if(top == 0){
				StackEmpty ske;
				throw ske;
			}
			else{
				cout << "Top of the Stack is: " << top << " and the String at top is: " << s[top-1] << endl;
			}
		}
		
		bool isempty(){
			if(top == 0){
				return true;
			}
			else{
				return false;
			}
		}
		
		bool isfull(){
			if(top == size){
				return true;
			}
			else{
				return false;
			}
		}
		
		~stack(){
			cout << "Cleaning Array: " << endl;
			delete [] s;
		}
};

int main(){
	cout << "Enter the size of Stack: ";
	int n;
	cin >> n;
	stack s(n);
	int trig = 1;
	while(trig != 0){
		cout << "\nEnter:\n0 to exit" << "\n1 to Push Strings" << "\n2 to Pop String" << "\n3 to Know Top of the Stack\n" << endl;
		cin >> trig;
		if(trig == 0){
			break;
		}
		
		try{
			if(trig == 1){
				cout << "Enter the String: ";
				string s1;
				cin >> s1;
				s.push(s1);
			}
		}
		catch(StackFull e){
		cout << e.what() << endl;
		}
		
		try{
			if(trig == 2){
				cout << "Poping Stack: " << endl;
				s.pop();
			}
		}
		catch(StackEmpty msg){
		cout << msg.what() << endl;
		}
		
		try{
			if(trig == 3){
				cout << "Top of Stack: " << endl;
				s.Top();
			}
		}
		catch(StackEmpty msg){
		cout << msg.what() << endl;
		}
	}
	
	return 0;
}
