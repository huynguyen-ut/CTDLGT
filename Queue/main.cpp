#include <iostream>

using namespace std;
struct Element{
    int data;
    Element* next;
};
struct Queue{
    Element * head;
    Element * tail;
    int number;
};
Element* CreateElement(int data){
    Element *e=new Element;
    e->data=data;
    e->next=NULL;
    return e;
}
void InitQueue(Queue& q){
    q.head=q.tail=NULL;
    q.number=0;
}
void Enqueue(Element *e,Queue &q){
if(q.head==NULL)
    q.head=q.tail=e;
   else{
    e->next=q.head;
    q.head=e;
   }
   q.number++;
}
bool isEmpty(Queue q){
    if(q.number>0)
        return true;
    else false;
}
Element * Dequeue(Queue &q){
    if(q.tail!=NULL){
     Element *p=q.head;

     while(p->next!=q.tail)
        p=p->next;

     Element *tmp=q.tail;
     q.tail=p;
     p->next=NULL;
     return tmp;

     }
     return NULL;
}
void TravelQueue(Queue q){
     Element *p=q.head;
     while(p!=NULL){
        cout<<p->data<<'\t';
        p=p->next;
     }
}
int main()
{
    Queue q;
    InitQueue(q);
    Enqueue(CreateElement(7),q);
    Enqueue(CreateElement(5),q);
    Enqueue(CreateElement(6),q);
    Enqueue(CreateElement(9),q);
    TravelQueue(q);
    Dequeue(q);
    cout<<'\n';
    TravelQueue(q);
    return 0;
}
