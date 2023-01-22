#include <iostream>
using namespace std;

class MyClass{
	int n;
public:
	MyClass(){
		this->n = 0;
	}
	MyClass(int p_n){
		this->n = p_n;
	}	
	void print(){
		cout<<"Number = "<<this->n<<endl;
	}
	MyClass operator+(int n1){
		return {this->n + n1};
	}
};

int main(){
	MyClass m1 = MyClass(4);
	MyClass m2 = MyClass(2);
	MyClass m3 = MyClass(0);
	
	m2 = m1+10; // m1.operator+(10);
	m2.print();
	
	
	
	return 0;
}








