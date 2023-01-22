#include <iostream>
using namespace std;

class Sum{//abstract class
	public:
		virtual void sum(int x, int y)=0;//abstract function (without body)
};

class Operation: public Sum{
	public:
		void sum(int x, int y) override {
			cout<<"Sum="<<x+y<<endl;
		}
};
int main(){
	
	Operation op;
	op.sum(3, 4);

	return 0;
}








