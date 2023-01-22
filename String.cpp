#include <iostream>
using namespace std;
int main(){
	
	string name;
	cout<<"Enter Your Name:";
	getline(cin, name);// space
	cout<<"name="<<name<<endl;
	cout<<name[0]<<endl;
	
	// name.size() or name.length
	for(int i=0;i<name.length();i++){
		cout<<name[i]<<endl;
	}
	
	return 0;
}

