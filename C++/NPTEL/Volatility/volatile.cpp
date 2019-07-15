#include <iostream>
using namespace std;

static volatile int i;

void fun(void)
	{
		i = 0;
		while(i!=100);	
	}
	
int main()
	{
		fun();
		return 0;
	}
