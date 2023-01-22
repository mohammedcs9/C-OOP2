#include <iostream>
using namespace std;

void max(){
	int size;
	cout<<"How many numbers:";
	cin>>size;
	int a[size];
	
	for (int i=0;i<size;++i){
			cout<<"Number "<<i+1<<"  : ";
			cin>>a[i];
	}
	int max=a[0];
	for (int i=0;i<size;++i){
		if (a[i]>max) max=a[i];
	}
	cout<<"The max value is "<<max;

}
int main(){
	
	max();
	
	return 0;
}
