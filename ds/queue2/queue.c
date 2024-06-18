
static int queue[100];
static int rear;
static int front;

void push(int data){
	queue[rear] = data;
	++rear;
}

int pop(void){
	int i = front;
	++front;

	return queue[i];
}

