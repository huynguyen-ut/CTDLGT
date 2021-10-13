#include <iostream>

using namespace std;
struct Node{
   int key;
   Node *left;
   Node *right;
   Node *parent;
};

struct Tree{
    Node * root;
    int NumberNode;
};
Node* createNode(int);
void InitTree(Tree &);
bool put(Node*,Tree &);
void TravelNLR(Node*);
void TravelLNR(Node*);
void TravelLRN(Node*);
Node * SearchTree(Node *root, int x);
Node * SearchTreeDQ(Node *root, int x);
void DeleteNode(Node *);
int NumberLeaf(Node *);
int HighTree(Node *);
int main()
{
    Tree T;
    InitTree(T);
    Node *n;
    //3, 17, 2,35,18,33,19

    put(createNode(3),T);


    put(createNode(17),T);


    put(createNode(2),T);


    put(createNode(35),T);


    put(createNode(18),T);


    put(createNode(33),T);


    put(createNode(19),T);
    cout<<"NLR-------\n";
     TravelNLR(T.root);
    cout<<"LNR-------\n";
   TravelLNR(T.root);
   cout<<"LRN-------\n";
    TravelLRN(T.root);

   // DeleteNode(SearchTree(T.root,33));
     cout<<"\n Chieu cao cua cay: "<<HighTree(T.root);
     cout<<"\n Tong so node la: "<<NumberLeaf(T.root);
  //  TravelLRN(T.root);
    return 0;
}
Node* CreateNode(int k){
   Node *n=new Node;
   n->key=k;
   n->left=NULL;
   n->right=NULL;
   n->parent=NULL;
   return n;
}
void InitTree(Tree &T){
   T.root=NULL;
   T.NumberNode=0;
}
bool Put(Node*n,Tree &T){
      Node *p=T.root;
      if(T.root==NULL){
        T.root=n;
        return true;
     }
      while((n->key>p->key&&p->right!=NULL)||(n->key<p->key&&p->left!=NULL)){
        if(n->key==p->key)
            return false;
        else{
        if(n->key>p->key)
            p=p->right;
        else
            p=p->left;}
     }

      if(n->key>p->key)
        p->right=n;
      else
        p->left=n;
       n->parent=p;
      return true;

}
int PutDQ(Node *root, int x)
{
	if(root!=NULL)
	{
		if(root->key == x)return 0;
		if(root->key>x)return PutDQ(root->left, x);
		else return PutDQ(root->right, x);
	}
	root = CreateNode(x);
	return 1;
}

void TravelNLR(Node *p){

   if(p!=NULL){
     cout<<p->key<<'\n';
     TravelNLR(p->left);
     TravelNLR(p->right);
   }
}
void TravelLNR(Node *p){
    if(p!=NULL){
      TravelLNR(p->left);
      cout<<p->key<<'\n';
      TravelLNR(p->right);
   }
}
void TravelLRN(Node *p){
    if(p!=NULL){
      TravelLRN(p->left);
      TravelLRN(p->right);
      cout<<p->key<<'\n';
   }
}
Node * SearchTree(Node *root, int x){
     Node *p=root;
     while(p!=NULL){
        if(p->key==x) return p;
        if(p->key>x) p=p->left;
        if(p->key<x) p=p->right;
    }
    return NULL;
}
Node * SearchTreeDQ(Node *root, int x){
    Node* p=root;
    if(p==NULL) return NULL;
    else  {
        if(p->key==x) return root;
        if(p->key>x) return SearchTreeDQ(p->left,x);
        if(p->key<x) return SearchTreeDQ(p->right,x);
    }
}
void DeleteNode(Node *p){
   Node *q=NULL;
   if(p->left==NULL&&p->right==NULL) // node la
    delete p;
   else {if(p->left==NULL&&p->right!=NULL) // 1 con phai
            if(p->key>p->parent->key)
             p->parent->right=p->right;
             else p->parent->left=p->right;

          if(p->left!=NULL&&p->right==NULL) // 1  con trai
             if(p->key>p->parent->key)
             p->parent->right=p->left;
             else p->parent->left=p->left;

          if(p->left!=NULL&&p->right!=NULL){ // no co 2 con
              q=p->left;
              while(q->right!=NULL)
                q=q->right;
             /*
             q=p->right;
              while(q->left!=NULL)
                q=q->left;

             */
              q->parent->right=q->left; //

              p->key=q->key;
              p=q;
        }
          delete p;
        }

}
int NumberLeaf(Node *root){
     Node* p=root;
     if(p==NULL) return 0;
     if(p->left==NULL&&p->right==NULL)
        return 1;
     else return NumberLeaf(p->left)+NumberLeaf(p->right);
}

int HighTree(Node *root){
    Node *p=root;
    if(p==NULL) return -1;
     if(p->left==NULL&&p->right==NULL)
        return 0;
     else { int T=HighTree(p->left);
            int P=HighTree(p->right);
            return T>P?T+1:P+1;

          }
}
