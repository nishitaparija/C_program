#include <stdio.h>
#include <stdlib.h>
 
typedef struct BST 
{
   int data;
   struct BST *lchild, *rchild;
} node;
 
node *get_node() 
{
   node *temp;
   temp = (node *) malloc(sizeof(node));
   temp->lchild = NULL;
   temp->rchild = NULL;
   return temp;
}

void insert(node *root, node *new_node) 
{
   if (new_node->data < root->data) 
   {
      if (root->lchild == NULL)
         root->lchild = new_node;
      else
         insert(root->lchild, new_node);
   }
 
   if (new_node->data > root->data) 
   {
      if (root->rchild == NULL)
         root->rchild = new_node;
      else
         insert(root->rchild, new_node);
   }
}

void inorder(node *temp) 
{
   if (temp != NULL) 
   {
      inorder(temp->lchild);
      printf("%d ", temp->data);
      inorder(temp->rchild);
   }
}

void preorder(node *temp) 
{
   if (temp != NULL) 
   {
      printf("%d ", temp->data);
      preorder(temp->lchild);
      preorder(temp->rchild);
   }
}
 
void postorder(node *temp) 
{
   if (temp != NULL) 
   {
      postorder(temp->lchild);
      postorder(temp->rchild);
      printf("%d ", temp->data);
   }
}
 
void main() 
{
   int choice;
   int key;
   node *new_node, *root, *tmp, *parent;
   node *get_node();
   root = NULL;
 
   printf("\nProgram For Binary Search Tree ");
   do 
   {
      printf("\n1.Insert");
      printf("\n2.Display");
      printf("\n3.Exit");
      printf("\n\nEnter your choice : ");
      scanf("%d", &choice);
 
      switch (choice) 
      {
      case 1:
            new_node = get_node();
            printf("\nEnter The Element ");
            scanf("%d", &new_node->data);
 
            if (root == NULL)
               root = new_node;
            else
               insert(root, new_node);
         break;
 
      case 2:
         if (root == NULL)
            printf("\nTree Is Not Created");
         else 
         {
            printf("\n\nThe In-order display: ");
            inorder(root);
            printf("\nThe Pre-order display: ");
            preorder(root);
            printf("\nThe Post-order display: ");
            postorder(root);
         }
         break;
      }
   } while (choice != 3);
}
