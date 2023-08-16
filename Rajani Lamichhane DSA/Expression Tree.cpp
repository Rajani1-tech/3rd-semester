#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<malloc.h>
#define size 20
typedef struct node
{ char data;
struct node *left;
struct node *right;
}
btree;
			/*stack stores the operand nodes of the tree*/
btree *stack[size];
int top;
int main()
{
btree *root;
char exp[80];
		/*exp stores postfix expression*/
btree *create(char exp[80]);
void inorder(btree *root);
void preorder(btree *root); 
void postorder(btree *root); 
printf("\n enter the postfix expression:\n");
scanf("%s",exp);
top=-1;			/*Initialize the stack*/
root=create(exp); 
printf("\n The tree is created.....\n");
printf("\n Inorder traversal: \n\n");
inorder(root);
printf("\n Preorder traversal: \n\n");
preorder(root);
printf("\n Postorder traversal: \n\n");
postorder(root);
getch();
}
 
btree *create(char exp[])
{
btree *temp;
int pos;
char ch; 
void push(btree*);
btree *pop();
pos=0;
ch=exp[pos];
while(ch!='\0')
{ 
			/*create new node*/
temp=((btree*)malloc(sizeof(btree)));
temp->left=temp->right=NULL;
temp->data=ch;
if(isalpha(ch))
push(temp);
else if(ch=='+' ||ch=='-' || ch=='*' || ch=='/')
{ temp->right=pop();
temp->left=pop();
push(temp);
}
 else
printf("\n Invalid char Expression\n");
pos++;
ch=exp[pos];
}
 temp=pop();
return(temp);
}
void push(btree *Node)
{ 
if(top+1>=size)
printf("Error:Stack is full\n");
top++;
stack[top]=Node;
}
btree* pop()
{
btree *Node;
if(top==-1)
printf("\nerror: stack is empty..\n");
Node =stack[top];
top--;
return(Node);
}
 
 
/* functions for tree traversal*/
void inorder(btree *root)
{
btree *temp;
temp=root;
if(temp!=NULL)
{ inorder(temp->left);
printf("%c",temp->data);
inorder(temp->right);
}
}

void preorder(btree *root)
{
btree *temp;
temp=root;
if(temp!=NULL)
{
printf("%c",temp->data);
preorder(temp->left);
preorder(temp->right);
}
}

void postorder(btree *root)
{
btree *temp;
temp=root;
if(temp!=NULL)
{
postorder(temp->left);
postorder(temp->right);
printf("%c",temp->data);
}
}

