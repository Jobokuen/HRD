#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int plus(int a, int b){
    int result;
    int count = 0;
    int tmp = b;
    int r = 1;
    while(tmp < 0){
        tmp /= 10;
        count = count * 10;
    }
    
    result = a * count + b;
    return result;
}

int replus(int a, int b){
    int result;
    int count = 0;
    int tmp = a;
    int r = 1;
    while(tmp < 0){
        tmp /= 10;
        count *= 10;
    }
    
    result = b * count + a;
    return result;
}

int solution(int a, int b) {
    int answer;
    int pl;
    int repl;
    pl = plus(a,b);
    repl = replus(a,b);

    if (pl >= repl) answer = pl;
    else if(repl > pl) answer = repl;
    printf("%d\n",answer);
    return answer;
}
