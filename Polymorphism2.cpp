#include <iostream>
using namespace std;

class Shape{
	public:
		virtual void info()=0;
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
class A{
	public:
		void draw(Shape *q){
			q->info();
		}
};
int main(){
	
	A a;
	
	Circle c;
	Rectangle r;
	
	a.draw(&c);
	a.draw(&r);

	return 0;
}








