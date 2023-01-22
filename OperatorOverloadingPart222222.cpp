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
	MyClass operator++(){
		this->n ++;
		return *this;
	}
	bool operator>(MyClass m2){
		if (this->n > m2.n) return true; 
		return false;
		// or return this->n > m2.n;
	}
};

int main(){
	MyClass m = MyClass(2);
	MyClass m1 = MyClass(4);
	MyClass m2 = MyClass(2);
	MyClass m3;
	
	if (m1>m2) // m1.operator>(m2);
		cout<<"Hi";
	
	
	
	return 0;
}








