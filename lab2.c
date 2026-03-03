#include <stdlib.h>
#include <stdio.h>

int function(int x){
	return x=x-2;
}

int main(){
	int a=30, i=0;
	
	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;	
}
