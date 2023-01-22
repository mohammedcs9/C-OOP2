#include <iostream>
#include <cmath>
#include <random>
using namespace std;
const double pi=22/7.0;
int main(){
	
	cout<<"max(2,5)="<<max(2,5)<<endl;	
	cout<<"min(2,5)="<<min(2,5)<<endl;
	cout<<"|-4|="<<abs(-4)<<endl;		
	cout<<"sqrt(16)="<<sqrt(16)<<endl;
	cout<<"2^3="<<pow(2,3)<<endl;	
	cout<<"2^3="<<exp2(4)<<endl;	
	cout<<"log(10)="<<log10(10)<<endl;
	cout<<"ln(10)="<<log(10)<<endl;
	cout<<"e^10="<<exp(1)<<endl;
	cout<<"(e^10)-1="<<expm1(1)<<endl;
	cout<<"remainder%(7, 6)="<<remainder(7, 6)<<endl;
	cout<<"fmod(7, 6)="<<fmod(7, 6)<<endl;
	cout<<"copysign(3, -9)="<<copysign(3, -9)<<endl;
	
	cout<<"sin(30)="<<sin(30*pi/180)<<endl;
	cout<<"cos(60)="<<cos(60*pi/180)<<endl;
	cout<<"tan(45)="<<tan(45*pi/180)<<endl;
	cout<<"asin(0.5)="<<asin(0.5)*180/pi<<endl;
	cout<<"acos(0.5)="<<acos(0.5)*180/pi<<endl;
	cout<<"atan(1)="<<atan(1)*180/pi<<endl;
	
	cout<<"ceil(6.1)="<<ceil(6.1)<<endl;
	cout<<"ceil(6.9)="<<ceil(6.9)<<endl;
	cout<<"floor(6.1)="<<floor(6.1)<<endl;
	cout<<"floor(6.9)="<<floor(6.9)<<endl;
	cout<<"round(6.1)="<<round(6.1)<<endl;
	cout<<"round(6.9)="<<round(6.9)<<endl;
	cout<<"rint(6.1)="<<rint(6.1)<<endl;
	cout<<"rint(6.9)="<<rint(6.9)<<endl;
	cout<<"nearbyint(6.1)="<<nearbyint(6.1)<<endl;
	cout<<"nearbyint(6.9)="<<nearbyint(6.9)<<endl;
	
	cout<<"**********************"<<endl;
	
	/*for(int i = 0; i < 10 ; ++i){
		cout<<rand()<<endl; // version do not define in rand here
		cout<<rand()%10<<endl;
	}*/
	
	return 0;
}

//https://phoenixnap.com/kb/linux-commands-cheat-sheet#directory-navigation
