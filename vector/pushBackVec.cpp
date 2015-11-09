#include<iostream>
#include<vector>

using namespace std;

void countDim(vector<int> a){
	cout<<a.size()<<endl;
}

int main(){
	vector<int> a(10,1);
	vector<int> b(5,2);

	//b.push_back(a);
	//b = a + b;

	//cout<<b.size()<<endl;
	
	vector<int> c(a.begin(),a.begin()+5);
	//countDim(a(a.begin(),a.begin()+5));
	countDim(c);

	return 0;
}
