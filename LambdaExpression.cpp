#include <iostream>
#include <functional>// no download
using namespace std;

void sum1(){ cout<<10+20<<endl; }
int sum2(){ return 10+20; }
void sum3(int x, int y){ cout<<x+y<<endl; }
int sum4(int x, int y){ return x+y; }

int main(){
	// lambda expression [] () {}
	int i=2, j=5;
	auto y1 = [](){cout<<10+20<<endl;};
	auto y2 = [](){return 10+20;};
	//function<void(void)> y1 = [](){cout<<10+20<<endl;};
	//function<int(void)> y2 = [](){return 10+20;};
	function<void(void)> y3 = [i, j](){cout<<i+j<<endl;};
	function<int(int, int)> y4 = [](int x, int y){return x+y;}; // [] () {} if was empty delete hir
	int n = [](int x, int y){return x+y;} (3, 4);
	cout<<n; 
	y3();
	
	
	/*sum1();
	cout<< sum2() <<endl;
	sum3(10, 20);
	cout<< sum4(10, 20)<<endl;*/
		
	return 0;
}








