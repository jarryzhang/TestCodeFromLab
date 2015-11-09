#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> vec;
	for(int i=0; i<10; i++) vec.push_back(i);

	vector<int> vec2(vec,vec+6);

	cout<<"vec2 len:"<<vec2.size()<<endl;
	//cout<<"vec2 last:"<<vec2[vec2.end()]<<endl;

	return 0;
}
