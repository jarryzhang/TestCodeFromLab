#include<iostream>
#include<vector>

using namespace std;

#define ROW 3

void printVec(vector< vector <int> > vec){

	for(int i = 0; i<vec.size(); i++){
		for(int j = 0; j<vec[i].size(); j++){
			cout<<vec[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int main(){
	vector< vector <int> > vec;
	vector<int> tmp(5,1);
	int a = 2;

	vec.push_back(tmp);
	vec.push_back(tmp);
	vec.push_back(tmp);

	vec[0].push_back(a);
	vec[1].push_back(a);
	vec[2].push_back(a);

	printVec(vec);

	vec[0].erase(vec[0].begin());

	printVec(vec);

	return 0;
}
