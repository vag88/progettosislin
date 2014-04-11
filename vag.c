#include "vaglib.h"


int main (int argc, char *argv[]){
	
	sys_exit(0);
	sys_fork();
	sys_getpid();
	
	int pid;
	
	sys_fork();

	pid=sys_getpid();
	if(pid==0){

		sys_write(1, "Sono il figlio\n", pid);

	}else{

		sys_write(1, "Sono il padre\n", 2);

	}
	return 0;

}
