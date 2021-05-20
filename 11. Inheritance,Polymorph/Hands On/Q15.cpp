#include<iostream>
using namespace std;

class a{
	public:
		void display();/*{
			cout << "A :: Display" << endl;
		}*/
};

class b:public a{
	public:
		void display();/*{
			display();
			//cout << "B :: Display" << endl;
		}*/		
		//void override
};

void a::display(){
	cout << "A :: Display" << endl;
}

void b::display(){
	a::display();
}

int main(){
	b obj;
	obj.display();
	
	return(0);
}
