#include <iostream>
using namespace std;

void draw(){
	class B{
	public:
		void info(){
			cout<<"B"<<endl;
	    }	    
    };
    B b;
	b.info();
}


int main(){

	draw();
	
	return 0;
}
