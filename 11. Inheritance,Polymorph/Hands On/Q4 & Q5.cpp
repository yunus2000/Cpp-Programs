#include<iostream>
using namespace std;

class vehicles{
	public:
		vehicles(){
			cout << "Vehicle Constructor: " << endl;
		}
		
		~vehicles(){
			cout << "Vehicle Destructor: " << endl;
		}
};

class fourwheels: public vehicles{
	public:
		fourwheels(){
			cout << "FourWheels Constructor: " << endl;
		}
		
		~fourwheels(){
			cout << "FourWheels Destructor: " << endl;
		}
};

class cars: public fourwheels{
	public:
		cars(){
			cout << "cars Constructor: " << endl;
		}
		
		~cars(){
			cout << "cars Destructor: " << endl;
		}
};

class sedan: public cars{
	public:
		sedan(){
			cout << "sedan Constructor: " << endl;
		}
		
		~sedan(){
			cout << "sedan Destructor: " << endl;
		}
};

class SUV: public cars{
	public:
		SUV(){
			cout << "SUV Constructor: " << endl;
		}
		
		~SUV(){
			cout << "SUV Destructor: " << endl;
		}
};

int main(){
	sedan s;
	SUV v;
	
	return(0);
}
