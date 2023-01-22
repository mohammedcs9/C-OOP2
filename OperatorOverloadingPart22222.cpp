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
	MyClass operator++(){//pree ++m1
		this->n ++;
		return *this;// return this->n;
	}
	MyClass operator++(int){// post m1++
	MyClass r;
	r = *this;
		this->n ++;
		return r;// return this->n;
	}
};

int main(){
	MyClass m = MyClass(2);
	MyClass m1 = MyClass(4);
	MyClass m2 = MyClass(2);
	MyClass m3;
	
	//m1++; // m1.operator+=(m2);
	//++m1; // m1.operator++();
	m3 = m1++;
	m3.print();
	
	m3 = ++m;
	m3.print();
	
	
	
	return 0;
}








