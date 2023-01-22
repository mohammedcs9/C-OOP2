#include <iostream>
using namespace std;
int main(){
	
	int *ptr;
	int x=5;
	
	ptr=&x;
	x=10;
	*ptr=30;
	
	cout<<x<<'\n';	
	cout<<&x<<'\n';
	cout<<ptr<<'\n';
	cout<<*ptr<<'\n';
	cout<<"******************"<<endl;
	
	int y[3]={5,7,9};
	
	for(int i = 0; i < 3; ++i){
		cout<<y[i]<<endl;
		cout<<&y[i]<<endl;
	}
	for(int j = 0; j < 3; ++j){
		cout<<y+j<<endl;
		cout<<*(y+j)<<endl;
		}
	
	/*cout<<y[0]<<endl;
	cout<<y[1]<<endl;
	cout<<y[2]<<endl;
	cout<<&y[0]<<endl;
	cout<<&y[1]<<endl;
	cout<<&y[2]<<endl;
	
	cout<<y<<endl;
	cout<<y+1<<endl;
	cout<<y+2<<endl;
	cout<<*y<<endl;
	cout<<*(y+1)<<endl;
	cout<<*(y+2)<<endl;*/

	 
	return 0;
}
