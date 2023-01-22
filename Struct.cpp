#include <iostream>
using namespace std;

class Human{
	public:
		string name;
		int age;
}h1, h2, h3;// object class
struct A: Human{
	
};
int main(){
	A a;
	a.age=10;
	
	h1 = {"mohmd", 21};
	//h1.name = "mohmd";
	//h1.age = 21;
	cout<<h1.name<<endl;
	cout<<h1.age<<endl;
	
	
	return 0;
}
