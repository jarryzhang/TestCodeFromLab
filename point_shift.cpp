#include "stdio.h"
#include <iostream>
#include "stdlib.h"
#include "string.h"

int main(){
	
	int *p;
	int n = 13;
	int len;
	p = (int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		*(p+i) = i;
		printf("%d ",*(p+i));
	}
	printf("\n");
	
	//len = strlen(p);	//wrong
	len = sizeof(p)/sizeof(p[0]);
	printf("%d\n",len);	
	len = sizeof(p);
	printf("%d\n",len);

	int m = 4;
	//for(int i=m;i<n-1;i++) *(p+i) = *(p+i+1);
	//*(p+n-1) = '\0';	//会显示零，并不会使指针到尾部
	
	for(int i=0;i<n-1;i++) printf("%d ",*(p+i));

	
	return 0;
}
