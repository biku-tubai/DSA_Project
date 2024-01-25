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
// Function to evaluate the expression tree(argument:tree*  return:int)

// Function to check if a character is an operator(argument:char  returns:int)
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}
// Function to insert an equation into an expression tree(argument:char* returns: tree*)
struct TreeNode* insertEquationIntoTree(char equation[]) {
    int i = 0;
    struct TreeNode* root = NULL;

    while (equation[i] != '\0') {
        if (isdigit(equation[i])) {
            struct TreeNode* operandNode = createNode(equation[i]);
            if (root == NULL) {
                root = operandNode;
            } else {
                if (root->left != NULL && root->right == NULL) {
                    root->right = operandNode;
                } else {
                    struct TreeNode* newRoot = createNode(equation[i - 1]);
                    newRoot->left = root;
                    newRoot->right = operandNode;
                    root = newRoot;
                }
            }
            i++;
        }
        else if (isOperator(equation[i])) {
            struct TreeNode* operatorNode = createNode(equation[i]);
            operatorNode->left = root;
            root = operatorNode;
            i++;
        }
        else if (equation[i] == ' ') {
            i++;
        }
        else {
            printf("Error: Invalid character '%c' in the equation.\n", equation[i]);
            exit(EXIT_FAILURE);
        }
    }

    return root;
}
//main function
int main()
{
    
    return 0;
}
