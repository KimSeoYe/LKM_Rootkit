#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int
main (int argc, char * argv[]) 
{
	if (argc != 2) {
		perror("./bingo <target_pid>\n") ;
		exit(1) ;
	}

	char * target_pid =argv[1] ;
	
	//printf(">> ") ;
	//scanf("%d", &target_pid) ;

	char command[128] ;
	sprintf(command, "echo \"%s\" > /proc/dogdoor", target_pid) ;

	int ret = system(command) ;
	if (ret == -1 || ret == 127) {
		perror("system") ;
		exit(1) ;
	}
}

