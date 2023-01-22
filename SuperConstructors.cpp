#include <iostream>
using namespace std;

class A{
	public:
		A(int n){
			cout<<"A"<<endl;
			cout<<"Number="<<n<<endl;
		}
};
class B: public A{
	public:
		B(int y):A(y){
			cout<<"B"<<endl;
		}
};
class C: public B{
	public:
		C(int x):B(x){
			cout<<"C"<<endl;
		}
};
/*class C: public B{
	public:
		C(int n):B(){
			cout<<"Number="<<n<<endl;
		}
};*/
int main(){
	
	//C c; // C c = C(); or C c;
	//C c(5);
	C c(5);

	return 0;
}








