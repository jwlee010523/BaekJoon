#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10000
#define TRUE 1
#define FALSE 0
#define MINUS -1

typedef struct _stack{
    int arr[MAX];
    int front;
    int rear;
}Queue;

void init(Queue * pq){
    pq->front = 0;
    pq->rear = 0;
}
int empty(Queue * pq){
    if(pq->front == pq->rear)
        return TRUE;
    else
        return FALSE;
}

int NextPosIdx(int pos){
    if(pos == MAX - 1)
        return FALSE;
    else
        return pos+1;
}

void push(Queue * pq, int data){
    if(NextPosIdx(pq->rear) == pq->front){
        return;
    }
    pq->rear = NextPosIdx(pq->rear);
    pq->arr[pq->rear] = data;
}

int pop(Queue * pq){
    if(empty(pq))
        return MINUS;
    pq->front = NextPosIdx(pq->front);
    return pq->arr[pq->front];
}

int size(Queue * pq){
    return (pq->rear) - (pq->front);
}

int front(Queue * pq){
    if(empty(pq))
        return MINUS;
    return pq->arr[NextPosIdx(pq->front)];
}

int back(Queue * pq){
    if(empty(pq))
        return MINUS;
    return pq->arr[pq->rear];
}


int main(void){
    Queue que;
    int data = 0, n = 0;
    char str[30];

    init(&que);

    printf("number: ");
    scanf("%d", &n);
    fgetc(stdin);

    for(int i = 0; i<n; i++){
        printf("input: ");
        scanf("%s", str);
        fgetc(stdin);
        if(!strcmp(str, "push")){
            scanf("%d", &data);
            fgetc(stdin);
            push(&que, data);
        }else if(!strcmp(str, "pop")){
            printf("%d\n", pop(&que));
        }else if(!strcmp(str, "front")){
            printf("%d\n", front(&que));
        }else if(!strcmp(str, "back")){
            printf("%d\n", back(&que));
        }else if(!strcmp(str, "size")){
            printf("%d\n", size(&que));
        }else if(!strcmp(str, "empty")){
            printf("%d\n", empty(&que));
        }
    }
    return 0;
}
