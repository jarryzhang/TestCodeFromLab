#include <iostream>
#include <vector>

using namespace std;

void printVec(vector< vector <int> > vec){

	for(int i = 0; i<vec.size(); i++){
		for(int j = 0; j<vec[i].size(); j++){
			cout<<vec[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void printVec(vector <int> vec){

	for(int i = 0; i<vec.size(); i++){
			cout<<vec[i]<<"\t";
	}
	cout<<endl;
}

int main(){
	vector< vector <int> > vec;
	vector<int> tmp(10,2);

	vec.push_back(tmp);
	vec.push_back(tmp);
	printVec(vec);

	vector<int> vec2 = tmp;
	vec2.resize(2);

	printVec(vec2);

	vec2.resize(15,6);
	printVec(vec2);
	
	return 0;
}
