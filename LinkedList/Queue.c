#include <stdio.h>
#include <stdlib.h>

//Structure template
struct list{
	char data;
	struct list *next;
};
//Redefining struct list as node
typedef struct list node;
void qinsert(node**, node**);   //Inserting character function in queue
void qdelete(node**, node**);   //Deleting character function in queue
void disp(node*);               // Output displaying function

/*
====================================================================
"Front" and "rear" pointer needed to be changed when inserting and
deleting so addresses of them is passed in qinsert and qdelete
=====================================================================
*/
int main()
{
    int opt;        //Option inputing variable
    char ch;        //choice inputing variable
    node *front;    //front pointer in queue
    node *rear;     //rear pointer in queue
    rear = front = NULL;
    do
    {
        printf("\nEnter your option to perform in a queue\n");
        printf("1. Insert\n");
        printf("2. delete\n");
        printf("3. Display the list\n");
        scanf("%d", &opt);
        switch(opt)
        {
        case 1:
            qinsert(&front,&rear);
            break;
        case 2:
            qdelete(&front,&rear);
            break;
        case 3:
            disp(front);
            break;
        }
        printf("\nDo you wish to continue[y/n]\n");
        ch = (char)getche();
    }while(ch == 'Y' || ch == 'y');
    printf("\nPress any key to exit\n");
    getch();
}

/*
===============================================================
qinsert
	function that inserts a new node into the queue
===============================================================
*/

void qinsert(node **front,node **rear)
{
    node *newnode;      //New node to be inserted
    newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    printf("\nEnter the character to push\n");
    fflush(stdin);
    scanf("%c",&(newnode->data));
    if(*front == NULL && *rear == NULL)
    {
        *front = newnode;
        *rear = newnode;
    }
    else
    {
  		/*
         Rear points to the last node whose next field must be pointed to
		 newnode and then rear points to the lastest node i.e. new node
		*/
        (*rear)->next = newnode;
        *rear = newnode;
    }
}
/*
===============================================================
qdelete
	function that deletes a node in the queue
===============================================================
*/

void qdelete(node **front, node **rear)
{
    node *delnode;      //Node to be deleted
    if((*front) == NULL && (*rear) == NULL)
        printf("\nQueue is empty to delete any element\n");
    else
    {
        delnode = *front;
        (*front) = (*front)->next;
        free(delnode);
    }
}

/*
===============================================================
disp
	function that displays all the nodes in the queue
===============================================================
*/
void disp(node *f)
{
    while(f != NULL)
    {
        printf(" %c ",f->data);
        f = f->next;
    }
}
