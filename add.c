#include<stdio.h>
#include<stdlib.h>

struct Node{
    int coeff;
    int pow;
    struct Node* next;
};

void readPolynomial(struct Node** poly,int);
void displayPolynomial(struct Node* poly,int);
void addPolynomials(struct Node** result, struct Node* first, struct Node* second);

int main(){
    struct Node* first = NULL;
    struct Node* second = NULL;
    struct Node* result = NULL;
    int t1,t2;
    printf("\nEnter the First polynomial:\n");
    printf("\nEnter the number of terms :");
    scanf("%d",&t1);
    readPolynomial(&first,t1);
    printf("\nEnter the Second polynomial:\n");
    printf("\nEnter the number of terms :");
    scanf("%d",&t2);
    readPolynomial(&second,t2);
    printf("\n\nFirst polynomial is :\n");
    displayPolynomial(first,t1);
    printf("\n\nSecond polynomial is :\n");
    displayPolynomial(second,t2);
    
    printf("\n\nSum Polynomial : \n");
    addPolynomials(&result, first, second);
    displayPolynomial(result,t1);
    printf("\n");
    return 0;
}
void readPolynomial(struct Node** poly,int t){
    int coeff, exp,i;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    *poly = temp;

    for(i=0;i<t;i++){
        printf("\n Coeffecient: ");
        scanf("%d", &coeff);
        printf("\n Exponent: ");
        scanf("%d", &exp);
        temp->coeff=coeff;
        temp->pow=exp;
        temp-> next = NULL;

        temp->next = (struct Node*)malloc(sizeof(struct Node));
        temp = temp->next;
        temp->next = NULL;

    }
}
void displayPolynomial(struct Node* poly,int t){
    int i;
    for(i=0;i<t;i++){
        printf("%d(X^%d)", poly->coeff, poly->pow);
        poly = poly->next;
        if(i != t-1){
            printf("+");
        }
    }
}

void addPolynomials(struct Node** result, struct Node* first, struct Node* second){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->next = NULL;
    *result = temp;
    while(first && second){
        if(first->pow > second->pow){
            temp->coeff = first->coeff;
            temp->pow = first->pow;
            first = first->next;
        }
        else if(first->pow < second->pow){
            temp->coeff = second->coeff;
            temp->pow = second->pow;
            second = second->next;
        }
        else{
            temp->coeff = first->coeff + second->coeff;
            temp->pow = first->pow;
            first = first->next;
            second = second->next;
        }
        if(first && second ){
            temp->next = (struct Node*)malloc(sizeof(struct Node));
            temp = temp->next;
            temp->next = NULL;
        }
    }
    while(first || second){
        temp->next = (struct Node*)malloc(sizeof(struct Node));
        temp = temp->next;
        temp->next = NULL;

        if(first){
            temp->coeff = first->coeff;
            temp->pow = first->pow;
            first = first->next;
        }
        else if(second){
            temp->coeff = second->coeff;
            temp->pow = second->pow;
            second = second->next;
        }
    }
} 