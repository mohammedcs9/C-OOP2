#include <iostream>
using namespace std;

class A{
	private:
		class B{
		public:
			void info(){
				cout<<"B"<<endl;
		}
	};
	public:
		void info2(){
			cout<<"A"<<endl;
			B b;
			b.info();
		}
};	

int main(){
	A a;
	a.info2();
	
	
	return 0;
}
