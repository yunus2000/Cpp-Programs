#include<iostream>
using namespace std;

class Vehicle { 
	  virtual void print() = 0;
};
class FourWheeler : public Vehicle{ 
	  void print(){
	  	cout<< "Print of FourWheelers Class" << endl;
	  }
};
class Car : public FourWheeler {
	  void print(){
	  	cout<< "Print of Car Class" << endl;
	  }
};
     
int main(){
		   //Option A
		   Vehicle* vptr = new Car;
			FourWheeler* fptr= dynamic_cast <FourWheeler*> (vptr);
			
			//Option B
      	   FourWheeler *fptr1 = new FourWheeler;
           Car *cptr= dynamic_cast<Car*>(fptr1);
           
           //Option C
		   FourWheeler* fptr2 = new FourWheeler;
           Vehicle *vptr2 = dynamic_cast<Vehicle*>(fptr2);
           
           if(fptr == NULL){
           	cout << "Option A is Failed" << endl;
		   }
		   if(cptr == NULL){
           	cout << "Option B is Failed" << endl;
		   }
		   if(vptr2 == NULL){
           	cout << "Option C is Failed" << endl;
		   }
		   
		   return 0;
}

       		
