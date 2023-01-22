#include <iostream>
using namespace std;

void print(int x[2][3]){
	for (int i=0;i<2;++i){
		for (int j=0;j<3;++j){
			cout<<x[i][j]<<endl;
		}
	}

}
int main(){
	
	int a[2][3]={
		{1,2,3},
		{6,5,4}	
	};
	print(a);
	
	return 0;
}








