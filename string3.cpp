#include <iostream>
using namespace std;
int main(){
	
	string x="ahmed 1234";
	string y="ahmed";
	
	cout<<y.at(0)<<endl;
	cout<<y.substr(1, 3)<<endl;
	cout<<y.substr(2)<<endl;
	cout<<y.find('a')<<endl;
	cout<<y.rfind('e')<<endl;
	cout<<y.find("med")<<endl;	
	
	return 0;
}

//https://phoenixnap.com/kb/linux-commands-cheat-sheet#directory-navigation
