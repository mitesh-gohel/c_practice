//Write a addafter funcation for doubley linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;
	struct node *prev;
};

struct node *add(struct node*);
void display(struct node *);
struct node *addafter(struct node *, int info, int relative_info);

int main()
{
	struct node *head = NULL;
	while(1)
	{
		int op = 0;
		int info = 0, relative_info = 0;
		printf("1 for add element in linked list or create a link-list :\n");
		printf("2 for displaying linked list :\n");
		printf("3 for adding value after some value in linked list :\n");
		printf("4 for quit :\n");
		printf("Brfore scanf head = %p\n", head);
		scanf("%d", &op);
		printf("After scanf head = %p\n", head);
		switch(op)
		{
			case 1:
				head = add(head);
				break;
			case 2 :
				display(head);
				break;
			case 3 :
				printf("Enter value to be added :");
				scanf("%d", &info);
				printf("Enter value after which you want to add value :\n");
				scanf("%d", &relative_info);
				head = addafter(head, info, relative_info);
				break;
			case 4 :
				printf("Quiting...\n");
				exit(0);
			default :
				printf("Invalid option\nPlease try again\n");
		}
		printf("\n");
	}
	return 0;
}

struct node *add(struct node *head)
{
	struct node *new_node = malloc(sizeof(struct node));
	printf("Enter a number :");
	scanf("%d", &(new_node->info));
	new_node->next = NULL;
	if(head)
	{
		struct node *cur_node = head;
		while(cur_node->next)
			cur_node = cur_node->next;
		new_node->prev = cur_node;
		cur_node->next = new_node;
	}
	else
	{
		new_node->prev = NULL;
		head = new_node;
	}
	return head;
}


void display(struct node *head)
{
	while(head)
	{
		printf("%d ", head->info);
		head = head->next;
	}
	printf("\n");
}


struct node *addafter(struct node * head, int info, int relative_info)
{
	struct node *cur_node = head;
	while(cur_node)
	{
		if(cur_node->info == relative_info)
		{
			struct node *new_node = malloc(sizeof(struct node));
			if(new_node == NULL)
			{
				printf("\nMemory is not available !");
				return head;
			}
			new_node->info = info;
			new_node->prev = cur_node;
			new_node->next = cur_node->next;
			if(cur_node->next)
				cur_node->next->prev = new_node;
			cur_node->next = new_node;
		}
		cur_node = cur_node->next;
	}
	return head;
}
