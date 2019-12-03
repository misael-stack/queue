#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	
	int data;
	struct node * next;
} *front=0;
 struct node *rear=0;
void enqueue(int x);
void display();
int main(){
	int x,i,choice;
	while(1){
	printf("****************\n");
	printf("\t main manu:\n");
	printf("enter 1 for enqueue");
	printf("enter 2 for dequeue");
	printf("enter 3 for display");
	printf("\n\n\n");
	printf("now enter your choice\n");
scanf("%d",&choice);

	switch(choice){
		case 1:
				printf("enter queue 1:\n");
	scanf("%d",&x);
			enqueue(x);
			break;
			
		case 2:
		display();
		break;	
		case 3:
		dequeue();
			break;
			default:
				printf("invalid input");
				
	}	
		printf("/n/n/n");
	}

return 0;
}
void enqueue(int x){
	int data;
	struct node *temp,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	

	newnode->data=x;
	newnode->next=0;
	
	if(front==0 && rear==0){
	front=newnode;
	rear=newnode;
		}
		
		
		else{
			
		rear->next=newnode;
		rear=newnode;	
		}
}


 void display(){
 struct node *temp;
 	if(front==0 && rear==0){
 		printf("no guy is standed in the shelf");
	 }
 	
	 else{
	 	temp=front;
 	while(temp!=0){
 	printf("first serrved guy=%d",front->data);
	     temp=temp->next;	
 		
	 }
 }
 
}
