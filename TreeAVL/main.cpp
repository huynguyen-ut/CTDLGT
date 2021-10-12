#include <iostream>

using namespace std;

struct Node{

   int key;
   int bal; // 0: can bang // -1: lech trai // 1:lech phai
   Node *left;
   Node *right;
   Node *parent;
};
struct Tree{
   Node *root;

};
Node* createNode(int k){
   Node *n=new Node;
   n->key=k;
   n->bal=0;
   n->left=NULL;
   n->right=NULL;
   n->parent=NULL;
   return n;
}

void InitTree(Tree &T){
   T.root=NULL;
   T.NumberNode=0;
}

int Put(Node *root, int x)
{
    int res=0;
	if(root!=NULL)
	{
		if(root->key == x)return -1;
		if(root->key>x){

                res=Put(root->left, x);
                if(res==-1) return res;

                switch(root->bal){
                  case -1: if(root->left->bal==-1)  // LL
                           Rotate_LL(root);
                           if(root->left->bal==1)   // LR
                           Rottae_LR(root);
                           return 1;
                  case 0:  root->bal=-1; return 1;
                  case 1:  root->bal=0 ;  return 0;
                }
              }
		else {
                res=Put(root->right, x);
            // continue
                return }
	}
	root = createNode(x);
	return 1;
}

void Rotate_LL(Node *T)
{	Node *T1 = T->Left;
	T->Left = T1->Right; T1->Right=T;
	switch(T1->bal)
	{
		case 0:	 T->bal =0;
                 break;
		case -1: T->bal=1;
				 break;
	}
	T1->bal=0;
	T=T1;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
