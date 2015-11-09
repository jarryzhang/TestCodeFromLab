#include "stdio.h"
#include <iostream>
#include "stdlib.h"
#include "string.h"

int main(){
	
	int *p;
	int a[50] = {0};
	int n = 13;
	int len;
	p = (int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		*(p+i) = i;
		printf("%d ",*(p+i));
		a[i] = i;
	}
	printf("\n");
	
	//len = strlen(p);	//wrong
	//len = sizeof(p)/sizeof(p[0]);
	//printf("%d\n",len);	
	//len = sizeof(p);
	//printf("%d\n",len);

	//n = sizeof(a);	//wrong
	len = sizeof(a)/sizeof(a[0]);
	printf("%d\n",len);
	
	return 0;
}
