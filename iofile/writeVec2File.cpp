#include<iostream>
#include<fstream>
#include<vector>
#include <iterator>
#include "stdio.h"
#include "stdlib.h"

using namespace std;

int main(){
	vector<int> buffer(10,100);
	for(int i=0; i<10; i++) buffer.push_back(i);

	vector<int> vec;
	int a;

	// write to file
	// method 1
	ofstream offile( "test.dat", ios::binary );
	copy( buffer.begin(), buffer.end(), ostream_iterator<int>(offile) );
	offile.close();

	// method 2
	FILE *infp;
	infp = fopen("c_test.dat","wb");
	for(int i = 0; i<buffer.size(); i++){
		fprintf(infp,"%d ",buffer[i]);
	}
	fclose(infp);
	
	// read from file
	//ifstream iffile( "test.dat", ios::binary);
	//vector<int> vecRead(istream_iterator<int>(iffile), istream_iterator<int>(ofs));
	//vector<int> vecRead(istream_iterator<int>(iffile));

	// method 2
	FILE *outfp;
	outfp = fopen("c_test.dat","rb");
	for(int i = 0; i<buffer.size(); i++){
		fscanf(outfp,"%d",&a);
		vec.push_back(a);
		cout<<a<<endl;
	}
	fclose(outfp);
	
	return 0;
}
