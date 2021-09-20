#include <iostream>

using namespace std;
struct Element{
    int data;
    Element* next;
    int number;
};
struct Stack{
    Element * Head;
    int number;
};
Element* CreateElement(int data){
    Element *e=new Element;
    e->data=data;
    e->next=NULL;
    return e;
}
void InitStack(Stack& S){
    S.head=NULL;
    S.number=0
}
void push(Element *e,Stack& S){
  if(S.head==NULL)
    S.head=e;
   else{
    e->pointer=S.head;
    S.head=e;
   }
   S.number++;
}
bool isEmpty(Stack S){
    if(S.number>0)
        return true;
    else false;
}
Element* pop(Stack&S){
   if(S.head!=NULL){
    Element *p=S.head;
    S.head=S.head->pointer;
    S.number--;
    return p;
    }
    else return NULL;
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
