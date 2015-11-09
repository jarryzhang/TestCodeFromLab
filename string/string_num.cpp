#include <iostream>
#include <string>

using namespace std;

int main(){
	string a = "";
	a += "abc";
	a += "def";

	cout<< a << endl;
	
	cout<< a[1]<<a[3]<<endl;

	if(a[1]=='b') cout<<"ok"<<endl;

	return 0;

}
