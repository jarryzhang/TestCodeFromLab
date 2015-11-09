#include <iostream>
#include <string>

using namespace std;

int main(){
	string a,b;
	cin>>a>>b;

	int plus = 0;
	int fa,fb;
	string c = "";
	int i=a.size()-1;
	int j=b.size()-1;

	while(i>=0 || j>=0){
		cout<<a[i]<<b[j]<<endl;
		if(i>=0 && a[i]=='1') fa = 1;
		else fa = 0;
		if(j>=0 && b[j]=='1') fb = 1;
		else fb = 0;
		
		cout<<i<<j<<" "<<fa<<fb<<plus<<endl;

		switch(fa+fb+plus){
			case 0: c = '0'+c; plus = 0; break;
			case 1: c = '1'+c; plus = 0; break;
			case 2: c = '0'+c; plus = 1; break;
			case 3: c = '1'+c; plus = 1; break;
		}
		i--;j--;
	}

	if(plus==1) c = '1'+c;

	cout<< c << endl;

	return 0;

}
