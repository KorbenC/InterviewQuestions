#include<iostream>
using namespace std;

struct  Node{
	Node* left;
	Node* right;
	int data;
};
 
class BinaryTree
{
      private:
              Node* root;
      public:
             BinaryTree():
                          root(NULL){};
                          bool isEmpty()
                          {
                               return(root == NULL);
                          }
                          void insert(int item)
                          {
                               Node* newbie = new Node();
                        	   Node* parent = NULL;
                               newbie->left = NULL;
                        	   newbie->right= NULL;
                        	   newbie->data = item;
                        	   if(isEmpty())
                               {
                                            root = newbie;
                               }
                               else
                               {
                                   Node* ptr = root;
                                   while(ptr != NULL)
                                   {
                                             parent = ptr;
                                             if(item > ptr->data)
                                             {
                                                     ptr = ptr->right;
                                             }
                                             else if(item < ptr->data)
                                             {
                                                  ptr = ptr->left;
                                             }
                                             else
                                             cout << "This object already exists in the tree!"<< endl;
                                             }
                                             //now ptr can tell me where to put the newbie
                                             if(item > parent->data )
                                             {
                                                     //put on the right
                                                     parent->right = newbie;
                                             }
                                             else if(item < parent->data )
                                             {
                                                  //put on the left
                                                  parent->left = newbie;
                                             }
                                   }
                               }
                               Node* getRoot()
                               {
                                     return root;
                               }
                               void inorder(Node* root)
                               {
                                    if(root != NULL)
                                    {
                                            inorder(root->left);
                                            cout << root->data << " ";
                                            inorder(root->right);
                                	}
                               }
                               void preorder(Node* root)
                               {
                                    if(root != NULL)
                                    {
                                            cout << root->data << " ";
                                            preorder(root->left);
                                            preorder(root->right);
                                	}
                                }
};
 
int main()
{
    int numIn;
    BinaryTree tree;
    
    do
    {
               cout << "Enter a number: ";
               cin >> numIn;
               if(numIn > 0)
               {
                        tree.insert(numIn);
               }
    }while(numIn > 0);

	cout << endl << "Data in preOrder: ";
	tree.preorder(tree.getRoot());
	
	cout << endl << endl << "Data in inOrder: ";
	tree.inorder(tree.getRoot());
	
	cout << endl << endl << "End of BST Demonstration" << endl;
 
	cin.get();
	cin.get();
	return 0;
}
