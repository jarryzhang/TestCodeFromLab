#include <iostream>
#include "b.h"
using namespace std;

int main(){
	int a = 1;
	int b = 2;
	int c;
	
	Test test;
	c = test.add(a,b);
	
	cout<<c<<endl;

	return 0;
}
