#include <stdio.h>
#include <string.h>

int main(){
	char string[10];
	int A = -73;
	unsigned int B = 313378;
	
	strcpy(string,"sample");
	
	printf("[A] Dec: %d Hex: %x unsingned: %u\n",A,A,A);
	printf("[B] Dec: %d Hex: %x unsingned: %u sizeof %u\n",B,B,B,sizeof(B));
	printf("[Field width on B] 3: %3u 10: %10u 8: %08u\n",B,B,B);
	printf("[string] %s address %08x unsingned: %u\n",string,string);

} 

