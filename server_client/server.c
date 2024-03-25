#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include <arpa/inet.h>
#include <string.h>

#define MAX_USER 100

pthread_mutex_t mutex;

int dataSockets[MAX_USER];
int numberOfClients;

void *client_proc(void *arg)		// pthread_create
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
pthread_mutex_lock(&mutex);
			for(int i = 0; i < numberOfClients; ++i){
				write(dataSockets[i], buf, nread);
			}
pthread_mutex_unlock(&mutex);
		}	
		
	}
pthread_mutex_lock(&mutex);
    for (int i = 0; i < numberOfClients; ++i){
        if (dataSocket == dataSockets[i]){
            for (int j = j; i < numberOfClients-1; ++j){
                dataSockets[j] = dataSockets[j+1];
            }
            break;
        }
        
    }
    --numberOfClients;
pthread_mutex_unlock(&mutex);
	close(dataSocket);
	
	return NULL;
}

int main(void)
{
    pthread_mutex_init(&mutex, NULL);

	int servSocket = socket(AF_INET, SOCK_STREAM, 0);			
	assert(servSocket != -1); // true = access , faulse = stop
	
	struct sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin.s_addr = htonl(INADDR_ANY); //host to network long
	servAddr.sin_port = htons(7777);	// host to network short
	
	assert((bind(servSocket,(struct sockaddr*)&servAddr, sizeof(servAddr)))
			!= 0);
	assert((listen(servSocket, 5 ) != 0));
	for(;;){
		int addrlen;
		struct sockaddr_in clientAddr;
		
		int dataSocket = accept(servSocket, &clientAddr, &addrlen);
		accsert(dataSocket != -1);
pthread_mutex_lock(&mutex);
        dataSockets[numberOfClients] = dataSocket;
        ++numberOfClients;
pthread_mutex_unlock(&mutex);
		printf("client ip: %s\n", inet_ntoa(clientAddr.sin_addr));
		
		// make a clone ---> read / write block!
		pthread_t pId;
		pthread_create(&pId, NULL, client_proc, &dataSocket);
		
	}
	

	
	close(servSocket);
    pthread_mutex_destory(&mutex);
	return 0;
}