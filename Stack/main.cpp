#include <iostream>

using namespace std;
struct Element{
    int data;
    Element* next;
};
struct Stack{
    Element * Head;
};
Element* CreateElement(int data){
    Element *e=new Element;
    e->data=data;
    e->next=NULL;
    return e;
}
void InitStack(Stack& S){
    S.head=NULL;
}
void push(Element *e,Stack& S){
  if(S.head==NULL)
    S.head=e;
   else{
    e->pointer=S.head;
    S.head=e;
   }
}
Element* pop(Stack&S){
   if(S.head!=NULL){
    Element *p=L.head;
    L.head=L.head->pointer;
    return p;
    }
}
void TravelStack(Stack L){
     Element *p=L.head;
     while(p!=NULL){
        cout<<p->data<<'\t';
        p=p->pointer;
     }
}
int main()
{
    //cout << "Hello world!" << endl;
    return 0;
}
