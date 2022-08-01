#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node *N;
node* create(){
	 node *newNode;
	 newNode = malloc(sizeof(node));
	 printf("\nEnter data : ");
     scanf("%d",&(newNode->data));
     return newNode;
}
void display()
{
    struct node* temp;
    if (N== NULL)
        printf("\nList is empty\n");
    else {
        temp = N;
        printf("\nThe list is : ");
        while (temp != NULL) {
            printf("%d  ",temp->data);
            temp = temp->next;
        }
    }
}
void inAtFront(node *t){
	if(N==NULL){
		N=t;
		N->next=NULL;
	}
	else{
		t->next=N;
		N=t;
	}
}
void inAtEnd(node *t){
	if(N==NULL){
		N=t;
		N->next=NULL;
	}
	else{
		node *p=N;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=t;
		t->next=NULL;
	}
}
void inAtPos(node *t,int pos){
	node *p, *newnode;
    int  i = 1;
    p = N;
    while (i++ < pos - 1) {
        p = p->next;
    }
    t->next = p->next;
    p->next = t;
}	
void deAtFront(){
	node *t = N;
	N=N->next;
	free(t);
}
void deAtEnd(){
	node *t,*p = N;
	while(p->next->next!=NULL){
		p=p->next;
	}
	t=p->next;
	p->next=NULL;
	free(t);
}
void deAtPos(int pos){
	node *p, *t;
    int  i = 1;
    p = N;
    while (i++ < pos - 1) {
        p = p->next;
    }
    if(p==N){
    	t = N;
		N=N->next;
		free(t);
	}
    else if(p->next->next==NULL){
    	t=p->next;
		p->next=NULL;
		free(t);
	}
	else{
		t = p->next;
		p->next = t->next;
	}
}
int main(){
	int n,pos;
    while (1){
		printf("\n1.Insert at Front\n2.Insert at end\n3.Insert at particular position\n");
		printf("\n4.Delete at Front\n5.Delete at end\n6.Delete at particular position\n");
		printf("\n7.Exit\n");
	    printf("\nEnter Choice : ");
	    fflush(stdin);
	    scanf("%d", &n);
 		node* t;
	    switch (n) {
	    case 1:
	    	t=create();
	        inAtFront(t);
	        display();
	        break;
	    case 2:
	        t=create();
	        inAtEnd(t);
	        display();
	        break;
	    case 3:
	    	printf("\nEnter the position : ");
	        scanf("%d",&pos);
	        t=create();
	        inAtPos(t,pos);
	        display();
	   		break;
	   	case 4:
	   		deAtFront();
	   		display();
	   		break;
		case 5:
	   		deAtEnd();
	   		display();
	   		break;
	   	case 6:
	   		printf("\nEnter the position : ");
	        scanf("%d",&pos);
	        deAtPos(pos);
	        display();
	   		break;
		case 7:
			printf("\nExit");
			exit(0);
		}
		printf("\n\n-----------------------------------------------\n");
	}
	return 0;
}

