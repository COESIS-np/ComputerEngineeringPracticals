#include<stdio.h>
#include<string.h>

char stack[100],output[100];
int top=-1,j=-1;

void push(char data){
	top++;
	stack[top]=data;
}
char pop(){
	char s=stack[top];
	top--;
	return s;
}
void push_to_output(char data){
	j++;
	output[j]=data;
}
int isoperator(char data){
	if(data=='+'||data=='-'||data=='*'||data=='/'||data=='^')
		return 1;
	else
		return 0;
}
int isoperand(char data){
	if((data>='A'&&data<='Z')||(data>='a'&&data<='z'))
		return 1;
	else
		return 0;
}
int precedence(char data){
	if(data=='+')
		return 1;
	else if(data=='-')
		return 2;
	else if(data=='*')
		return 3;
	else if(data=='/')
		return 4;
	else if(data=='^')
		return 5;
	else
		return 0;
}
int main(){
	char input[100];
	scanf("%s",&input);
	int i=0;
	char ele;
	while(input[i]!='\0'){
		//conversion part
		ele=input[i];
		if(isoperand(ele)==1){
			push_to_output(ele);	
		} else if(isoperator(ele)==1){
			while(precedence(stack[top])>precedence(ele))
				push_to_output(pop());
			push(ele);
		} else if(ele=='('){
			push(ele);
		} else if(ele==')'){
			char s;
			while((s=pop())!='(')
				push_to_output(s);
		}
		//Table part
		printf("\n%c\t",ele);
		int k=0;
		while((k-1)!=top){
			printf("%c",stack[k]);
			k++;
		}
		printf("\t\t%s",output);
		i++;
	}
	while(top!=-1)
		push_to_output(pop());
	//answer
	printf("\n\n\t%s",output);
	return 0;
}
