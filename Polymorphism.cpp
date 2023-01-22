#include <iostream>
using namespace std;

class Shape{
	public:
		virtual void info(){
			cout<<"Shape"<<endl;
		}
};
class Circle: public Shape{
	public:
		void info() override{
			cout<<"Circle"<<endl;
		}
};
class Rectangle: public Shape{
	public:
		void info() override{
			cout<<"Rectangle"<<endl;
		}
};
int main(){
	
	Shape x[3];
	x[0]=Shape();
	x[1]=Circle();
	x[2]=Rectangle();
	
	for (int i=0; i<3; ++i){
		x[i].info();
	}

	return 0;
}








