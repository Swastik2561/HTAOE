#include <stdio.h>

int main(){
	int int_arry[6] = {1,2,3,4,5,6};
	char chr_arry[6] = {'a','b','c','d','e'};
	void *p;
	p = (void *)int_arry;
	
	printf("%d",*((int *)p + 1));
	
	
	p=(void *)chr_arry; 	
	printf("%p %c",(char *)p + 1,*((char *)p + 1));
	

}
