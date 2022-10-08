#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *head=0, *temp, *newnode;
void createCLL()
{
	int ch;
	head=0;
	printf("Enter 1 to enter a node");
	scanf("%d",&ch);
	while(ch==1)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		printf("Enter the data\n");
		scanf("%d",&newnode->data);
		newnode->next=head;
		if(head==0)
		{
			head=newnode;
			newnode->next=newnode;
		}
		else
		{
			temp=head;
			if(temp->next!=head)
			{
				temp=temp->next;
			}
			temp->next=newnode;
			temp=newnode;
			newnode->next=head;
		}
		printf("Enter 1 to enter a node");
		scanf("%d",&ch);	
	}
}
void display()
{
	temp=head;
	if(temp->next!=head)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int ch;
	do
	{
		printf("***MAIN MENU***\n");
		printf("1: Insert\n");
		printf("2: Display\n");
		printf("Enter your option\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				createCLL();
				break;
			case 2:
				display();
				break;
		}	
	}while(ch!=3);
	return 0;	
}
