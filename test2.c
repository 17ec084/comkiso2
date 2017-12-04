#include <stdio.h>
main(){
	int i,x[5]={1,8,3,6,7},max;
	max=x[0];
	for(i=0;i<5;i++)
		if(max<x[i])
			max=x[i];
	printf("%d",max);
}
