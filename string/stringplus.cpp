#include <iostream>
#include <string>

using namespace std;

int main(){
	string a = "";
	a += "abc";
	a += "def";

	cout<< a << endl;

	string b = "";
	b = "abc"+b;
	b=  "def"+b;
	cout<< b << endl;

	return 0;

}
