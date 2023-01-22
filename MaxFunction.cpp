#include <iostream>
using namespace std;

int max(int x, int y, int z){
	int max=x;
	if (y>max) max=y;
	if (z>max) max=z;
	return max;
	
	//return  (y>x) ? ((y>z) ? y : z) : ((z>x) ? z : x ) ;
	
	
	
	/*if (x > y && x > z) return x;
	else if (y > x && y > z) return y;
	else return z;*/
}

int main(){
	
	
	
	

	/*cout<<max(2,5,9)<<endl;
	cout<<max(2,10,9)<<endl;
	cout<<max(12,5,9)<<endl;*/
	
	return 0;
}
