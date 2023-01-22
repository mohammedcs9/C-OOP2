#include <iostream>
using namespace std;
int main(){
	
	int x;
	cout<<"Enter Any Nuber:";
	cin>>x;
	
	switch(x){
		case 0:
			cout<<"zero";
			break;
		case 1:
			cout<<"one";
		case 2:
			cout<<"two";
		default:
			cout<<"Nan";		
	}
	
	int z,m, result;
	char op;
	cout<<"Enter Two Number"<<endl;
	cin>>z>>m;
	cout<<"Enter the Operation"<<endl;
	cin>>op;
	
	result= (op == '+') ? z+m : (op == '-') ? z-m : (op == '*') ? z*m : (op == '/') ? z/m : z%m; 
	
	/*switch(op){
		case '+': result=z+m;
			break;
		case '-': result=z-m;
			break;
		case '*': result=z*m;
			break;
		case '/': result=z/m;
			break;
		case '%': result=z%m;
			break;
		default: cout<<"Nan";	
			break;
	}*/
	cout<<"result="<<result;
	
	return 0;
}
