#include <stdio.h>
#include <stdlib.h>

// Definition of the expression tree node
typedef struct TreeNode {
    char data;
    struct TreeNode* left;
    struct TreeNode* right;
}tree;

// Function to create a new node(argument:char  return:tree*)
tree* createNode (char a)
{ tree* newNode = (tree*) malloc (sizeof(tree));
newNode -> data = a ;
newNode->left=NULL ;
newNode->right=NULL ;
return newNode ;
}
// function to print the infix expression from the expression tree(input : tree*)
// Function to evaluate the expression tree(argument:tree*  return:int)

// Function to check if a character is an operator(argument:char  returns:int)

// Function to insert an equation into an expression tree(argument:char* returns: tree*)

//main function
int main()
{
    
    return 0;
}
