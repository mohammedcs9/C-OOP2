#include <iostream>
using namespace std;

void print(int x[], int size){
	for (int i=0;i<size;++i){
		cout<<x[i]<<endl;
	}

}
int main(){
	
	int a[5]={4,5,6,78,8};
	print(a, 5);
	
	int b[]={0,1,6};
	print(b, 3);
	
	return 0;
}
