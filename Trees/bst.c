#include <stdio.h>
#include <stdlib.h>

//	Global Declarations
typedef struct node
{
        int data;
        struct node* left;
        struct node* right;
}NODE;
        
typedef struct
{
        int count;
        NODE* root;
}BST_TREE;

//	Function Declarations
void preOrder(NODE* root);
void inOrder(NODE* root);
NODE* BST_Insert(BST_TREE* tree, NODE* root, int data);

int main(void)
{
    //	Local Declarations
    int numIn;
    BST_TREE tree;
    
    //	Statements
    printf("Please enter a series of integers.""\nEnter a negative number to stop\n");
    tree.count = 0;
    tree.root = NULL;
    do
    {
              printf("Enter a number: ");
              scanf("%d", &numIn);
              if(numIn > 0)
              {
                       tree.root = BST_Insert(&tree, tree.root, numIn);
                       tree.count++;
              }
    }while(numIn > 0);
    
    printf("\nData in preOrder: ");
    preOrder(tree.root);
    
    printf("\n\nData in inOrder: ");
    inOrder(tree.root);
    
    printf("\n\nEnd of BST Demonstration\n");
    getch();
    return 0;
}

void preOrder (NODE* root)
{
//	Statements
	if (root)
	   {
	    printf("%4d", root->data);
	    preOrder (root->left);
	    preOrder (root->right);
	   } // if
	return;
}	// preOrder

void inOrder (NODE* root)
{
//	Statements
	if (root)
	   {
	    inOrder (root->left);
	    printf("%4d", root->data);
	    inOrder (root->right);
	   } // if
	return;
}	// inOrder


/*
=========================================================
BST_Insert
	This function uses recursion to insert the new data 
	into a leaf node in the BST tree.
=========================================================
*/
NODE* BST_Insert (BST_TREE* tree, NODE* root, int dataIn)
{
//	Local Declarations
	NODE* newPtr;

//	Statements 

	if (!root)
	   {
	    // NULL tree -- create new node 
	    newPtr = malloc(sizeof (NODE));
	    if (!newPtr)
	       printf("Overflow in Insert\n"), exit (100);
	    newPtr->data = dataIn;
	    newPtr->left = newPtr->right = NULL;
	    return newPtr;
	   } // if

	// Locate null subtree for insertion 
	if (dataIn < root->data) 
	    root->left = BST_Insert(tree, root->left, dataIn);
	else 
	   // new data >= root data 
	    root->right = BST_Insert(tree, root->right, dataIn);
	return root;
}	// BST_Insert
