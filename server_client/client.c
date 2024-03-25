#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <assert.h>


void *send_msg(void *arg)
{
    for(;;){
        char buf[1024];
        fgets(buf,1024,stdin);

        if (strcmp(buf, "/quit\n") == 0 ){
            break;
        }

        write(dataSocket, buf, strlen(buf)
    }
    close(dataSocket);
}

void*recv_msg(void *arg)
{
    for(;;){
        int buf[1024];
        int nread = read(dataSocket, buf, 1024);

        if(nread == 0){ 
            break;
        } else if (nread == -1)
        {
            break;
        } else {
            printf("%s",buf);
        }
        

    }
}


int main(void)
{
	int dataSocket = socket(AF_INET, SOCK_STREAM, 0);
	assert(dataSocket == 0);
	
	struct sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr = inet_addr("127.0.0.1");		//loop back address
	servAddr.sin_port = htons(7777);
	assert (connect(dataSocket, &servAddr, sizeof(servAddr)) == 0);
	
	// read(dataSocket, ???); / write(dataSocket, ???);
	
	pthread_t_pId1, pId2;
	pthread_create(&pId1, NULL, send_msg, &dataSocket);
	pthread_create(&pId2, NULL, send_msg, &dataSocket);
	
	for(;;){
		;	
	}
	
	close(dataSocket);
	return 0;
}