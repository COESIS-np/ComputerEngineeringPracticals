#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void changeColor(int desiredColor){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor);
}
struct node{
	int data;
	struct node *next;
};
struct node *head;
void create(){
	head=(struct node *)malloc(sizeof(struct node));
	if(head){
		printf("INSERT FIRST DATA TO CREATE SLL : ");
		scanf("%d",&head->data);
		head->next=NULL;
	}
}
void insert(int data, char pos){
	int k;
	struct node *p,*q;
	q=(struct node *)malloc(sizeof(struct node));
	q->data=data;
	p=head;
	if(pos=='B'){
		q->next=p;
		head =q;
	} else if(pos=='E'){
		p=head;
		while(p->next!=NULL){
			p=p->next;
		}
		q->next=NULL;
		p->next=q;
	}else if(pos=='S'){
		printf("\t INSERT AFTER NODE: ");
		scanf("%d",&k);
		p=head;
		while(p->data!=k){
			p=p->next;
			if(p==NULL){
				changeColor(12);printf("\tNODE NOT FOUND\a!!");changeColor(15);
				getch();
				return;
			}
		}
		q->next=p->next;
		p->next=q;
	}

}

void deletel(char pos){
	int k;
	struct node *p,*q;
	q=(struct node *)malloc(sizeof(struct node));
	p=head;
	if(pos=='B'){
		head=head->next;
		free(p);
	} else if(pos=='E'){
		p=head;
		q=head;
		while(p->next!=NULL){
			q=p;
			p=p->next;
		}
		q->next=NULL;
		free(p);
	}else if(pos=='S'){
		printf("\tDELETE NODE: ");
		scanf("%d",&k);
		p=head;
		q=head;
		while(p->data!=k){
			q=p;
			p=p->next;
			if(p==NULL){
				changeColor(12);printf("\tNODE NOT FOUND\a!!");changeColor(15);
				getch();
				return;
			}
		}
		q->next=p->next;
	}
}

void retrieve(int pos){
	struct node *p,*q;
	q=(struct node *)malloc(sizeof(struct node));
	p=head;
	int k=1,data;
	while(k!=pos){
		k++;
		p=p->next;
		if(p==NULL){
				changeColor(12);printf("\tNODE NOT FOUND\a!!");changeColor(15);
				getch();
				return;
			}
	}
	printf("\nDATA in pos %d is : %d",pos,p->data);
	
}

void traverse(){
	changeColor(10);
	struct node *p=(struct node *)malloc(sizeof(struct node));
	p=head;
	printf("\n------------------------------------------------------\n\t");
	if(p==NULL){
		printf("LIST IS EMPTY ");
	}else{
		while(p!=NULL){
			printf("%d --> ", p->data);
			p=p->next;
		}
	}
	printf("NULL");	
}
int main(){
	create();
menu:
	traverse();
	printf("\n------------------------------------------------------");
	changeColor(14);
	printf("\n1.INSERT\n\t-'B'egenning\n\t-After 'S'pecefic Node\n\t-'E'nd\n2.DELETE\n\t-'B'egenning\n\t-After 'S'pecefic Node\n\t-'E'nd\n3.RETRIEVE\n4.exit\n\t\tMenu choice::  ");
	int op,ele;
	char ch;
	changeColor(15);
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("\tSub-Menu choice: ");
			scanf(" %c",&ch);
			printf("\nElement to insert ");
			scanf("%d",&ele);
			insert(ele,ch);
			break;
		case 2:
			printf("\tSub-Menu choice: ");
			scanf(" %c",&ch);
			deletel(ch);
			break;
		case 3:
			printf("\nPOSITION TO RETRIEVE: ");
			scanf("%d",&ele);
			retrieve(ele);
			break;
		case 4:
			goto exit;
			break;
		default:
			printf("\n WRONG INPUT");
			break;
	}
	goto menu;
//	insert(2,'B');
//	insert(3,'B');
//	insert(4,'B');
//	insert(5,'B');
//	traverse();
//	insert(6,'E');
//	traverse();
//	insert(7,'S');
//	traverse();
//	deletel('B');
//	traverse();
//	deletel('E');
//	traverse();
//	deletel('S');
//	traverse();
//	retrieve(3);
exit:
	return 0;
}
