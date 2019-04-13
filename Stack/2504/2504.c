#include <stdio.h>
#include <string.h>

#define MAX 20
#define TRUE 1
#define FALSE 0

typedef struct _stack{
    char arr[MAX];
    int top;
}Stack;

void Init(Stack * ps){
    ps->top = -1;
    memset(ps->arr, 0, MAX);
}

void push(Stack * ps, char data){
    (ps->top)++;
    ps->arr[ps->top] = data;
}

int isEmpty(Stack * ps){
    if(ps->top == -1)
        return TRUE;
    return FALSE;
}

int pop(Stack * ps){
    char rdata = ps->arr[ps->top];
    if(isEmpty(ps))
        return FALSE;
    (ps->top)--;
    
    return rdata;
}

char peek(Stack * ps){
    return ps->arr[ps->top];
}

/*
 (()[[]])([])
 
 2(2+(3*3))+(2*3)
 2*2+2(3*3)+(2*3)
 */

int main(void){
    Stack stack;
    Init(&stack);
    
    int mul = 1, sum = 0;
    char str[32];
    
    scanf("%s", str);
    
    for(int i=0;i<strlen(str);i++){
        char temp = str[i];
        
        if(temp == '('){
            mul*=2;
            push(&stack, temp);
            if(i+1<strlen(str) && str[i+1] == ')') sum+=mul;
        }else if(temp == '['){
            mul*=3;
            push(&stack, temp);
            if(i+1<strlen(str) && str[i+1] == ']') sum+=mul;
        }
        
        if(!isEmpty(&stack)){
            if(temp == ')'){
                mul/=2;
                if (peek(&stack) == '(') pop(&stack);
            }else if(temp == ']'){
                mul/=3;
                if (peek(&stack) == '[') pop(&stack);
            }
        }
    }
    
    if(!isEmpty(&stack))
        sum=0;
    
    printf("%d\n", sum);
    
    return 0;
}
