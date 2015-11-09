#include <iostream>

using namespace std;

struct node{
	int val;
	node *next;
};

int main(){
	node *head;
	node *p;
	node *newnode;
	int len = 10;
	int count = 0;

	head  = new node;
	head->val = 0;
	p = head;
	//creat a chain
	for(int i=1; i<len; i++){
		newnode = new node;
		newnode->val = i;
		newnode->next = NULL;
		p->next = newnode;
		p = newnode;	
	}

	//print the chain
	p = head;
	while(p!=NULL){
		cout<<p->val<<endl;
		p = p->next;

	}

	//count the length of the chain
	p = head;
	while(p!=NULL){
		count++;
		p = p->next;
	}
	cout<<"length:"<<count<<endl;

	return 0;
}
