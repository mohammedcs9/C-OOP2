#include <iostream>
using namespace std;
class A{ //indirect super class
	private:
		int age;
	public:
		void myAge(){
			this->age=20;
			cout<<"Age="<<this->age<<endl;
		}	
};
class B: public A{ //direct super class
	
};
class C: public B{ //subclass
	
};
//class C: public B, public A{ //subclass
	
//};
int main(){
	
	A a = A();
	B b = B();
	C c = C();
	a.myAge();
	b.myAge();
	c.myAge();
	return 0;
}








