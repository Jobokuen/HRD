static int stack[100];
static int tos = -1;            // top of stack

void push(int data){        // fucn_definetion  
    stack[tos] = data;
    tos++;
}

int pop(void){
    tos--;
    return stack[tos-1];
}