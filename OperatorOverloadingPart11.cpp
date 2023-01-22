#include <iostream>
using namespace std;

class MyClass{
	int n;
public:
	MyClass(int p_n){
		this->n = p_n;
	}	
	void print(){
		cout<<"Number = "<<this->n<<endl;
	}
	MyClass operator+(MyClass m2){
		return {this->n + m2.n};
	}
};

int main(){
	MyClass m1 = MyClass(4);
	MyClass m2 = MyClass(2);
	MyClass m3 = MyClass(0);
	
	m3 = m1+m2; // m1.add(m2); -> m1.operator+(m2);
	m3.print();
	return 0;
}








