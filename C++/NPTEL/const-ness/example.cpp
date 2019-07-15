/*
Topic - Const-ness (constants) in C++
Youtube link - https://www.youtube.com/watch?v=Lxg-Qkr6YkE
*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	
	//Without constants
	char * str = strdup("IIT, Kharagpur");
	str[0] = 'N';					//Edit the name
	cout << str << endl;
	str = strdup("JIT, Kharagpur"); //Change the name
	cout << str << endl;
	
	/*
	  
	//To stop editing the name
	//Here the string itself becomes constant hence we cannot edit it but we can change it as it changes the pointer.
	const char * str = strdup("IIT, Kharagpur");
	str[0] = 'N';					//Error : Cannot edit the name
	cout << str << endl;
	str = strdup("JIT, Kharagpur"); //Change the name
	cout << str << endl;
	
	*/
	
	
	/*
	
	//To stop changing the name
	//Here the pointer is constant hence we can edit the string(as it does not changes the pointer) but we cannot change the string(as it changes the pointer).
	char * const str = strdup("IIT, Kharagpur");
	str[0] = 'N';					//Edit the name
	cout << str << endl;
	str = strdup("JIT, Kharagpur"); //Error : Cannot change the name
	cout << str << endl;
	
	*/
	
	/*
	
	//To stop both
	const char * const str = strdup("IIT, Kharagpur");
	str[0] = 'N';					//Error : Cannot edit the name
	cout << str << endl;
	str = strdup("JIT, Kharagpur"); //Error : Cannot change the name
	cout << str << endl;
	
	*/
	
	return 0;
}
