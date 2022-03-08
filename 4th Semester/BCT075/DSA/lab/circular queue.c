#include<stdio.h>
#define max 3
int front =-1,rear =-1;
int queue[max];


void enque(int data){
	if(rear==-1&&front==-1)
		rear=(rear+1)%max;
	if(rear==front)
		printf("\n\t\tQUEUE OVERFLOW");
	else{
		queue[rear]=data;
		printf("\nADDED %d\n   rear : %d  front : %d",data,rear,front);
		rear=(rear+1)%max;
		if(front==-1)
			front=0;
	}
}

int dequeue(){
	
	if(front==-1)
		printf("\n\t\tQUEUE UNDERFLOW");
	else{
		printf("\nremoved %d\n   rear : %d  front : %d",queue[front],rear,front);
		int data= queue[front];
		front=(front+1)%max;
		if(front==rear)
			front=-1;
		return data;
	}

}

void display(){
	int i;
	for(i=front;i!=rear;i=(i+1)%max){
		printf("%d , ",queue[i]);
	}
}

int main(){
	printf("\t\tCIRCULAR QUEUE");
menu:
	printf("\n\n---------------------------------------------------------------------");
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
