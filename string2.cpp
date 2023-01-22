#include <iostream>
using namespace std;
int main(){
	
	string x="ahmed 1234";
	string y="mohmd";
	
	//y=x;
	//y.assign(x);
	// swap
	//y.swap(x);
	// clean
	//y.erase(0, 3);
	// replace
	//y.replace(4, 6, " mohmd");
	y.replace(y.find('d'), 6, " ali");
	y.insert(5, "hassan ");
	
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	
	return 0;
}

//https://phoenixnap.com/kb/linux-commands-cheat-sheet#directory-navigation
