#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(char *prog_name,char *filename){
	
	printf("Usage: %s <data to add to %s>\n",prog_name,filename);	
	exit(0);

}

void fatal(char *message){
	char errmsg[100];
	
	strcpy(errmsg,"Fatal Error	");
	strncat(errmsg,message,83);
	perror(errmsg);
	exit(-1);
	

}

void *ec_malloc(unsigned int size){

	void *ptr;
	ptr=malloc(size);
	
	if(ptr==NULL)
		fatal("in Malloc() on memory allocatio");

	return ptr;
}

int main(int argc,char *argc[]){
	int fd;
	char *buffer,*datafile;
	buffer = (char*)ec_malloc(100);
	datafile = (char*)ec_malloc(20);
	strcpy(datafile,"/tmp/notes");
	
	if(argc<2)
		usage(argv[0],datafile);
		
	strcpy(buffer,argv[1]);
	
	printf("[Debug] buffer @ %p: \'%s\'\n",buffer,buffer);
	printf("[Debug] buffer @ %p: \'%s\'\n",datafile,datafile);
	
	strncat(buffer,"\n",1);
	
	//opening the file
	
	fd = open(datafile,O_WRONLY|O_CREAT|O_APPEND,S_IRUSR|S_IWUSR);
	if(fd==-1)
		fatal("in main() while opening file");
	printf("[Debug]file descriptor is %d\n",fd);
	
	//writing data
	if(write(fd,buffer,strlen(buffer)) == -1)
		fatal("in main()v while writing the data");
		

}
