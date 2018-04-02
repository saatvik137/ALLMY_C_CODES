//BINARY SEARCH TREE //
#include<stdio.h>
#include<memory.h>
#include<stdlib.h>
 
struct node {
	int key ;
	struct node *left,*right ;
};
 
//el function to make new node yahan //
struct node *newnode(int item)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->key = item ;
	temp -> left = temp->right = NULL ; 
	return temp ;
 
}
 
struct node * insert(struct node *node , int key)
{
	//iss function me insert karna hai memory me //
	if(node==NULL) return newnode(key);
 
	if(key < node->key) 
	node->left = insert(node->left,key) ;
 
	else if (key>node->key)
	node->right = insert(node->right,key) ;
 
	return node ;
}
 
 
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}
 
int main()
{
	struct node *root=NULL ;
	root = insert(root,5);
	insert(root,7);
	inorder(root);
	return 0;
 
} 
