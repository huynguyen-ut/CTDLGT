#include <iostream>

using namespace std;
struct Element{
    int data;
    Element *pointer;
};
struct LinkedList{
    Element *head;
    Element *tail;
};
void initList(LinkedList& L){
    L.head=L.tail=NULL;
}
Element* CreateElement(int data){
    Element *e=new Element;
    e->data=data;
    e->pointer=NULL;
    return e;
}
void InsertFirst(Element *e, LinkedList &L){
   if(L.head==NULL)
    L.head=L.tail=e;
   else{
    e->pointer=L.head;
    L.head=e;
   }
}
void InsertTail(Element *e, LinkedList &L){
   if(L.tail==NULL)
    L.head=L.tail=e;
    else{
        L.tail->pointer=e;
        L.tail=e;
    }
}
void TravleList(LinkedList L){
     Element *p=L.head;
     while(p!=NULL){
        cout<<p->data<<'\t';
        p=p->pointer;
     }
}
int main()
{
    LinkedList L;
    initList(L);
    Element *e=CreateElement(7);
    InsertFirst(e,L);
    e=CreateElement(9);
    InsertFirst(e,L);
    e=CreateElement(79);
    InsertFirst(e,L);
    e=CreateElement(20);
    InsertTail(e,L);
    TravleList(L);
    return 0;
}
