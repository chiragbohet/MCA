/*

Book : C++ complete Refrence 3rd Edition
Page No : 301
Topic - Inline functions
Inline functions are not actually called rather their code is expanded in line at the point of each invocation. 
This process is similar to using a function-like macro. 
*/

#include <iostream>
using namespace std;

int max(int a, int b){ret
urn a>b ? a : b;}

int main()
{
	cout<<max(10,30);
	cout<<" "<<max(99,88);
	
return 0;	
}

/*

The above program is equivalent to this 
#include <iostream>
using namespace std;

int main(){

	cout<<10>20 ? 10 : 20;
	cout<< " " << 99>88 ? 99 : 88;
	
	return 0;
}

*/

/*
Inline functions allow you to create very efficient code. Since class


*/
