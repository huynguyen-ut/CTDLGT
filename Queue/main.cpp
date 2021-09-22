#include <iostream>

using namespace std;
struct Element{
    int data;
    Element* next;
};
struct Queue{
    Element * Head;
    Element * Tail;
    int number;
};
Element* CreateElement(int data){
    Element *e=new Element;
    e->data=data;
    e->next=NULL;
    return e;
}
void InitQueue(Queue& q){
    q.head=q.Tail=NULL;
    q.number=0;
}
void Enqueue(Element *e,Queue &q){
if(q.head==NULL)
    q.head=q.tail=e;
   else{
    e->pointer=q.head;
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
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
