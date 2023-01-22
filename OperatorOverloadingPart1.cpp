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
	void add(MyClass m1, MyClass m2){
		this->n = m1.n+m2.n;
	}
};

int main(){
	MyClass m1 = MyClass(4);
	MyClass m2 = MyClass(2);
	MyClass m3 = MyClass(0);
	
	m3.add(m1,m2);
	m3.print();
	return 0;
}








