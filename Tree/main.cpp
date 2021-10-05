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
int HightTree(Node *);
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
  //  cout<<"LNR-------\n";
   // TravelLNR(T.root);
  //  cout<<"LRN-------\n";
  //  TravelLRN(T.root);

    DeleteNode(SearchTree(T.root,33));
     cout<<"LRN-------\n";
    TravelLRN(T.root);
    return 0;
}
Node* createNode(int k){
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
bool put(Node*n,Tree &T){
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
              p->key=q->key;
              p=q;
        }
          delete p;
        }

}
int NumberLeaf(Node *root){
     Node* p=root;
     if(p==NULL) return 0;
     if(p->left==NULL&&p->right=NULL)
        return 1;
     else return NumberLeaf(p->left)+NumberLeaf(p->right);
}

int HightTree(Node *root){
    Node *p=root;
    if(p==NULL) return -1;
     if(p->left==NULL&&p->right=NULL)
        return 0;
     else { int T=HightTree(p->left)
            int P=HightTree(p->right)
            return T>P?T+1:P+1;

          }
}
