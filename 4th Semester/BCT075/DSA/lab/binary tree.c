#include<stdio.h>
#include<stdlib.h>

struct node{
	int val;
	struct node *left, *right;
};

struct node *newnode(int val){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->val=val;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
	}
struct node* insert(struct node *t,int val){
	//leaf
	if(t==NULL){
		return newnode(val);
	}//insert in left
	else if(val<t->val){
		t->left = insert(t->left,val);
	}//insert in right
	else if(val>t->val){
		t->right = insert(t->right,val);
	}else{
		printf("\n\t\t****value already exist");
	}
	return t;
}
void preorder_traverse(struct node* t){
	if(t==NULL)
		return;
	printf("%d  ",t->val);
	preorder_traverse(t->left);
	preorder_traverse(t->right);
}
void postorder_traverse(struct node* t){
	if(t==NULL)
		return;
	postorder_traverse(t->left);
	postorder_traverse(t->right);
	printf("%d  ",t->val);
}
void inorder_traverse(struct node* t){
	if(t==NULL)
		return;
	inorder_traverse(t->left);
	printf("%d  ",t->val);
	inorder_traverse(t->right);
}
void search(struct node *t,int val){
	if(t==NULL)
		printf("\n\t**** %d :  NOT FOUND",val);
	//search in left
	else if(val<t->val){
		search(t->left,val);
	}//search in right
	else if(val>t->val){
		search(t->right,val);
	}else{
		printf("\n\t**** %d : Value found",val);
	}
}
struct node* min(struct node *t){
	if(t->left==NULL)
		return t;
	else
		return(min(t->left));
}
struct node* max(struct node *t){
	if(t->right==NULL)
		return t;
	else
		return(max(t->right));
}
struct node* deletenode(struct node *t,int val){
	//leaf
	if(t==NULL){
		return t;
	}//delete in left
	else if(val< t->val){
		t->left=deletenode(t->left,val);	
	}//delete in right
	else if(val> t->val){
		t->right=deletenode(t->right,val);
	}else{
		if(t->left==NULL)
			t=t->right;
		else if(t->right==NULL)
			t=t->left;
		else{
			struct node* temp;
			temp=min(t->right);
			t->val=temp->val;
			t->right=deletenode(t->right,temp->val);
		}
	}
	return t;
}
int main(){
	struct node *root=NULL,*m;
	printf("Input style  'CHOICE'<space>'DATA/SUB-CHOICE'  \n");
input:
	printf("\n--------------------------------------------------------");
	printf("\n'I'nsert\n'S'earch\n'D'elete\n'T'raverse\n\t1.pre-order\n\t2.in-order\n\t3.post-order\n'M'in/Max(0/1) \n'E'xit 0");
	printf("\n\t\tchoice:  ");
	char ip;
	int data;
	scanf(" %c%d",&ip,&data);
		switch(ip){
		case 'I':
			root=insert(root,data);
			break;
		case 'S':
			search(root,data);
			break;
		case 'D':
			root=deletenode(root,data);
			break;
		case 'T':
			if(data==1){
				printf("\n****Pre-order: ");
				preorder_traverse(root);
			}
			if(data==2){
				printf("\n****In-order: ");
				inorder_traverse(root);
			}
			if(data==3){
				printf("\n****Post-order: ");
				postorder_traverse(root);
			}
			break;
		case 'M':
			if(data==0){
				m=min(root);
				printf("\n****Minimum: %d",m->val);
			}
			if(data==1){
				m=max(root);
				printf("\n****Maximum: %d",m->val);
			}
			break;
		case 'E':
			goto exit;
			break;
		default:
			printf("\n WRONG INPUT");
			break;
	}
	goto input;
exit:	
	return 0;
	
}
