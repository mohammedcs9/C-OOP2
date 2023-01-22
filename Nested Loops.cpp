#include <iostream>
using namespace std;
int main(){
	
	int x=1;
	while(x<=10){
		
		int y=1;
		while(y<=10){
			cout<<x<<"*"<<y<<"="<<x*y<<endl;
			y++;
		}
		
		x++;
	}
	
	cout<<"********************"<<endl;
	
	int z=1;
	do{
		
		int m=1;
		do{
			cout<<z<<"*"<<m<<"="<<z*m<<endl;
			m++;
		}while(m<=10);
		
		z++;
	}while(z<=10);
	
	cout<<"********************"<<endl;
	
	for(int d =1; d <= 10; ++d)//d++ 
	{
		for(int j =1; j <= 10; ++j)//j++
		{
			cout<<d<<"*"<<j<<"="<<d*j<<endl;
		}
	}
	
	
	return 0;
}
