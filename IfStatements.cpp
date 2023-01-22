#include <iostream>
using namespace std;
int main(){
	
	int x;
	cout<<"Enter Any Number:";
	cin>>x;
	
	if(x>0){
		cout<<"Positive";
	}else if(x<0){
		cout<<"Negative";
	}else{
		cout<<"Zero";
	}
	
	
	int y;
	cout<<"Enter Any Number:";
	cin>>y;
	
	if(y>0){
		cout<<"Positive";
	}else{
		if(y<0){
			cout<<"Negative";
		}else{
			cout<<"Zero";
		}
	}
	
	int z=(6<2)? 5:9; // if()? cout : else
	int r=(6<2)? ((6>2) ? 5:9) :9; // if()? cout ((if ? cout : else)): else
	return 0;
}
