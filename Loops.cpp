#include <iostream>
using namespace std;
int main(){
	
	int i=0;
	
	while (i<5) {
		cout<<"Hello"<<endl;
		i++;
	}
	
	int m=5;
	
	while (i>0) {
		cout<<"Hello"<<endl;
		i--;
	}
	
	int r=0;
	
	
	int z=0;
	
	do{
		cout<<"z="<<z<<endl;
		z++;
	}while (z>5);
	
	for(int f=0;f<5;f++){
		cout<<"Hi"<<endl;
	}
	
	/*while (r<5) {
		cout<<"123"<<endl; // infinite loop
		r--;
	}*/
	
	while (true) {
		cout<<"0000"<<endl;
	}
	
	return 0;
}
