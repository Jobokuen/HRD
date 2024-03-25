#include <sys/types.h>
#include <sys/socket.h>
#include <stdli.b>
#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include <arpa/inet.h>
#include <string.h>



void *client_proc(void arg)		// pthread_create
{
	int dataSocket = *(int *)arg;
	
	for(;;){
		char buf[1024];
		int nread = read(dataSocket, buf, 1024);
		if(nread == 0){
			break;
		} else if (nread == -1){
			// error is occured!!
		} else {
			// buf msg ---> all clents!!
			for(int i = 0; i < numberOfClients; ++i){
				write(???, buf, nread);
			}
		}	
		
	}
	close(dataSocket);
	
	return NULL;
}

int main(void)
{
	int servSocket = socket(AF_INET, SOCK_STREAM, 0);			
	assert(servSocket != -1); // true = access , faulse = stop
	
	}


	struct sockaddr_in servAddr;
//	servAddr = ???;
	servAddr.sin_family = AF_INET;
	servAddr.sin.s_addr = htonl(INADDR_ANY); //host to network long
	servAddr.sin_port = htons(7777);	// host to network short
	
	assert((bind(servSocket,(struct sockaddr*)&servAddr, sizeof(servAddr))
			!= 0);
	assert((listen(servSocket, 5 ) != 0);
	for(;;){
		int addrlen;
		struct sockaddr_in clientAddr;
		
		int dataSocket = accept(servSocket, &clientAddr, &addelen);
		accsert(dataSocket != -1);

		printf("client ip: %s\n", inet_ntoa(clientAddr.sin_addr));
		
		// make a clone ---> read / write block!
		pthread_t pId;
		pthread_create(&pId, NULL, client_proc, &dataSocket);
		
	}
	

	
	close(servSocket);
	return 0;
}

//file descriptor = array index
// AF_INET
// tcp socket

/* bind_struct
	struct sockaddr {
	   sa_family_t sa_family;	-> address type
	   char        sa_data[14];
           }
*/