#include<stdio.h>
#define max 3
int front =-1,rear =-1;
int queue[max];

int isempty(){
	if(front==rear)
		return 1;
	else 
		return 0;
}
int isfull(){
	if(rear==max-1)
		return 1;
	else 
		return 0;
}
void enque(int data){
	if(isfull()==1)
		printf("\n\t\tQUEUE OVERFLOW");
	else{
		rear++;
		queue[rear]=data;
		printf("\nADDED %d\n   rear : %d  front : %d",data,rear,front);
	}
}

int dequeue(){
	
	if(isempty()==1)
		printf("\n\t\tQUEUE UNDERFLOW");
	else{
		front++;
		printf("\nremoved %d\n   rear : %d  front : %d",queue[front],rear,front);
		return queue[front];
	}
}

void display(){
	int i;
	for(i=front+1; i<=rear; i++){
		printf("%d , ",queue[i]);
	}
}

int main(){
	printf("\t\tLINEAR QUEUE");
menu:
	printf("\n---------------------------------------------------------------------");
	printf("\n1. enque\n2. dequeue\n3. display\n\t: ");
	int op,ele;
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("\nElement to insert:");
			scanf("%d",&ele);
			enque(ele);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		default:
			printf("\n WRONG INPUT");
			break;
	}
	printf("\n\n\t\tTRY AGAIN(1)");
	int c;
	scanf("%d",&c);
	if(c==1)
		goto menu;
	return 0;
}
