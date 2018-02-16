#include <stdio.h>

int global = 5;
int glo ;

void function(){
int stack_var;

printf("the function's stack_var is at the adress %p\n",&stack_var);

}
int main(){
int stack1_var;
static  int stack_var;
static  int stackinit_var=5;
int *hvar;
hvar = (int *)malloc(4);
	printf("These variables(global) are in the data segment %p\n",&global);
	printf("These variables(static) are in the data segment %p\n",&stackinit_var);
	printf("These variables(global) are in the bss segment %p\n",&glo);
	printf("These variables(static) are in the bss segment %p\n",&stack_var);
	printf("These variables are in the heap segment %p\n",&hvar);
function();	

}
