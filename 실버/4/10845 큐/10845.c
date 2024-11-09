#include <stdio.h> //단점 : 데이터를 지운다면 값이 저장할 수 있는공간이 줄어들게 된다.
typedef struct queue
{
    int arr[1000001];
    int front, near;
}queue;
void Newqueue(queue * p);
void Enqueue(queue * p, int value);
void Dequeue(queue * p);
void sizeQueue(queue * p);
int main(){
    queue que;
    Newqueue(&que);
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        char choice[1000];
        int value;
        scanf("%s", &choice);
        if(choice[0] == 'p' && choice[1] =='u' && choice[2] == 's' && choice[3] == 'h'){
            scanf("%d", &value);
            Enqueue(&que,value);
        }
        if(choice[0] == 'p' && choice[1] =='o' && choice[2] == 'p'){
            Dequeue(&que);
        }
        if(choice[0] == 's' && choice[1] =='i' && choice[2] == 'z' && choice[3] == 'e'){
            sizeQueue(&que);
        }
        if(choice[0] == 'f' && choice[1] =='r' && choice[2] == 'o' && choice[3] == 'n' && choice[4] == 't'){
            printf("%d", que.arr[que.front] ? que.arr[que.front] : -1);
        }
        if(choice[0] == 'b' && choice[1] =='a' && choice[2] == 'c' && choice[3] == 'k'){
            printf("%d",que.near > que.front ?  que.arr[que.near] : -1);
        }
        if(choice[0] == 'e' && choice[1] =='m' && choice[2] == 'p' && choice[3] == 't' && choice[4] == 'y'){
            if(que.arr[que.front] == 0){
                printf("0\n");
            }
            else{
                printf("1\n");
            }
        }
    }
}
void Newqueue(queue * p){
    p->front = -1;
    p->near = -1;
}
void Enqueue(queue * p, int value){
    if(p->near==-1){
        p->arr[++(p->near)] = value;
        p->front++;
    }
    else{
        p->arr[++(p->near)] = value;
    }
}
void Dequeue(queue * p){
    if(p->arr[p->front] == 0){
        printf("-1\n");
        return ;
    }
    printf("%d\n", p->arr[p->front++]);
}
void sizeQueue(queue * p){
    int count = 0;
    for(int i=p->front; i<=p->near; i++){
        count++;
    }
    printf("%d\n", count);
}