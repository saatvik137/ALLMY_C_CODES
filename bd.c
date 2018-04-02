#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *insert_at_begin(struct node *start, int d){
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	if(start == NULL){
		temp->data = d;
		temp->prev = NULL;
		temp->next = start;
		start = temp;
		return start;
	}
	else{

		temp->data = d;
		temp->prev = NULL;
		temp->next = start;
		start->prev = temp;
		start = temp;
		return start;
	}
}

void traverse(struct node *start){
	struct node *p;
	p = start;
	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
}

struct node *insert_at_end(struct node *start, int d){
	struct node *p, *temp;
	p = start;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = d;
	while(p->next != NULL){
		p = p->next;
	}
	temp->next = NULL;	
	p->next = temp;
	temp->prev = p;
	return start;
}

struct node *inserta(struct node *start, int d, int item){
	struct node *temp, *p=start;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = d;
	while(p!= NULL){
		if(p->data == item){
			temp->prev = p;
			temp->next = p->next;
			p->next->prev = temp;
			p->next = temp;
			return start;
		}
		p= p->next;
	}
	return start;
	
}

struct node *insertb(struct node *start, int d, int item){
	struct node *temp, *p=start;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = d;
	while(p!= NULL){
		if(p->data == item){
			temp->prev = p->prev;
			temp->next = p;
			p->prev->next = temp;
			p->prev = temp;
			return start;
		}
		p= p->next;
	}
	return start;
	
}


int main(){
	struct node *start = NULL;
	int t,k,d;
	while(1){
		printf("Enter 1,2,3\n");
		scanf("%d", &t);
		int item,data;
		 int i,d;
		 switch(t){
			case 1: printf("Enter the Number to be Inserted\n");
					scanf("%d", &d);
					start = insert_at_begin(start,d);
					break;
			case 2: printf("Enter the Number to be inserted at the End\n");
					scanf("%d", &d);
					start = insert_at_end(start,d);
					break;
			case 3: traverse(start);
					break;
			case 4: scanf("%d %d", &item, &data);
					start = inserta(start,data,item);
					break;
			case 5: 
					scanf("%d %d", &i, &d);
					start = insertb(start,d,i);
					break;
			/*case 4: printf("4 to reverse\n");
					start = reverse(start);
					break;
			case 5: start = dab(start);
					break;
			case 6: int data;
					scanf("%d", &data);
					start = del(start,data);*/ 
		}
		int n;
		printf("press 9 to continue\n");
		scanf("%d", &n);
		if(n != 9){ 
			break;
		}
	}
	return 0;
}
