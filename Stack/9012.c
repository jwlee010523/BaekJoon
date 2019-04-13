#include <stdio.h>
#include <memory.h>
#include <string.h>

#define MAX 100

int tc, top, flag;
char str[MAX];
char stack[MAX];

int isEmpty(){
    if (top == 0)
        return 1;
    else
        return 0;
}
void push(char x){
    stack[top++] = x;
}

int pop(){
    return stack[--top];
}

void init(){
    top = 0;
    flag = 0;
    memset(str, 0, 50);
    memset(stack, 0, 50);
}

int main(){
    
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++){
        init();
        scanf("%s", str);
        for (int i = 0; i < strlen(str); i++){
            if (str[i] == '('){
                push('(');
            }else if (str[i] == ')'){
                if(!isEmpty())
                    pop();
                else{
                    flag = 1;
                    break;
                }
            }
        }
        
        if (isEmpty() && flag==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

