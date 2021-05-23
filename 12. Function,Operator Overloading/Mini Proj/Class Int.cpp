#include<iostream>
using namespace std;

class Int{
	private:
		int a;
	public:
		Int(){
			a = 0;
		}
		
		Int(int k){
			a = k;
		}
		
		Int(const Int &obj){
			a = obj.a;
		}
		
		/*void operator=(const Int &i){
			 this->a = i.a;
		}*/
		
		Int operator ++(){
			Int i;
			i.a = ++a;
			return i;
		}
		
		Int operator ++(int ){
			Int i;
			i.a = a++;
			return i;
		}
		
		Int operator+=(const Int &i){
			Int i2;
			i2.a = this->a + i.a;
			return i2;
		}
		
		Int operator-=(Int &i){
			Int i2;
			i2.a = this->a - i.a;
			return i2;
		}
		
		Int operator+(Int &i){
			Int i2;
			i2.a = this->a + i.a;
			return i2;
		}
		
		Int operator-(Int &i){
			Int i2;
			i2.a = this->a - i.a;
			return i2;
		}
		
		friend Int operator+(Int &i1, int i2){
			Int i;
			i.a = i1.a + i2;
			return(i);
		}
		
		friend Int operator-(Int &i1, int i2){
			Int i;
			i.a = i1.a - i2;
			return(i);
		}
		
		friend ostream &operator<<(ostream &output, Int &i){
			output << i.a;
			return(output);
		}
		
		friend istream &operator>>(istream &input, Int &i){
			input >> i.a;
			return input;
		}
};

int main(){
	Int a(3),b(a),c;
	c = b = a;
	cout << c << endl;
	c -= a;
	cout << c << endl;
	c++;
	cout << c << endl;
	
	int n;
	cout << "Enter a Number: ";
	cin >> c;
	cout << c << endl;
	Int a2(3),b2(5),c2(7);
    Int d;
    d=a2+b2-c2;
    cout<<d<<endl;
	
	return 0;
}
