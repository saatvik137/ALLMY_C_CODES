#include<stdio.h>
#include<memory.h>
#include<stdlib.h>

struct node{
	int key ;
	struct node * left, *right ;
	int height ;
};

struct node * newnode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node)) ;
	temp -> right = NULL ;
	temp -> left  = NULL ;
	temp -> height = 1 ;
	return temp ;
}

int getbalance(struct node *N)
{
	if (N=NULL)
	return 0 ;
	
	return (height(N->left)-height(N->right));
}

int max(int a , int b  )
{
return a>b?a:b ;	
}

int height(struct node * N )
{
	if (N = NULL )
	return 0 ;
	
	return N->height ;
}

struct node * minvaluenode(struct node * node)
{
	struct node * current = node ;
	
	while (current->left!=NULL)
	{
		current = current -> left ;
		
	}
	return current ;
}

struct node * RIGHTROTATION(struct node *y)
{
	struct node *x = y->left ;
	struct node *temp2 = x->right ;
	
	//rotation
	x->right = y ;
	y -> left = temp2 ;

   //update thy height 
   
   y->height = max(height(y->left),height(y->right))+ 1 ;
   x->height = max(height(x->left),height(x->right)) + 1;
   
   return x ;   
}

struct node * LEFTROTATION(struct node *x)
{
	struct node *y = x->right ;
	struct node *temp = y->left ;
	
	//rotation
	y->left=x;
	x->right=temp ;
	
	
   y->height = max(height(y->left),height(y->right))+ 1 ;
   x->height = max(height(x->left),height(x->right)) + 1;
   
   return y ;  
}


struct node * insert(struct node * node , int key)
{
	if (node == NULL)
	return 0 ;
	
	if (key<node->key)
	node->left = insert(node->left,key);

    else 
    node->right = insert(node->right,key);
    
    //height toh update karenge 
    
    node->height = max(height(node->left),height(node->right))+1 ;
    
    int balance = getbalance(node) ;
    
    if (balance>1 && key<node->left->key)//ll case
	return RIGHTROTATION(node);
	
	if (balance>1 && key>node->left->key)
	node->left=LEFTROTATION(node->left);
	return RIGHTROTATION(node) ;
	
	if (balance<-1 && key<node->right->key)//RL
	{
	node->right=RIGHTROTATION(node->right);
	return LEFTROTATION(node) ;
    }
    
	if(balance < -1 && key>node->right->key)
	return RIGHTROTATION(node); 

    return node ;


    }

struct node * deletenode(struct node * root , int key )
{
	if(root==NULL)
	return 0 ;
	
	if(key<root->key)
	root->left = deletenode(root->left,key);
	
	if(key>root->key)
	root->right = deletenode(root->right,key) ;
	
}

//if the above three are not met means node ->key = key bole toh ye node delete hona hai 

	if(node->right==NULL || node->left==NULL)
	{
		struct node * temp = root->left?root->left:root->rigt ;
		
		if(temp = NULL)
		{
			temp = root ;
			root = null ;
		}
	    
	    else 
	    *root = *temp ;  
	    
	   return root ;
	   free (temp) ;
	   
	   
	}

  else 
  {
  	struct node * temp = minValueNode(root->right) ;
  	
  	root->key = temp-> key ;
  	
  	root->right = deletenode(root->right,temp->key);
  }
  
  if(root == NULL)
  return root ;
  
  root->height = max(height(root->left), height(root->right)) + 1;
  
   int balance = getBalance(root);
   
    // Left Left Case
    if (balance > 1 && getBalance(root->left) >= 0)
        return RIGHTROTATION(root);
        
    if (balance > 1 && getBalance(root->left) < 0 )
	root->left = LEFTROTATION(root->left);
	return RIGHTROTATION(root);    
	
	// Right Right Case
    if (balance < -1 && getBalance(root->right) <= 0)
        return LEFTROTATION(root);
 
    // Right Left Case
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = RIGHTROTATION(root->right);
        return LEFTROTATION(root);
    }

