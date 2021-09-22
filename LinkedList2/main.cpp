#include <iostream>

using namespace std;

struct Element{
    int data;
    Element* next;
    Element* prev;
};
struct LinkedList2{
    Element *head;
    Element *tail;
};
void initList(LinkedListC& L){
    L.head=L.tail=NULL;
}

void InsertFirst(Element *e, LinkedList &L){
   if(L.head==NULL)
    L.head=L.tail=e;
   else{
    e->next=L.head;
    L.head=e;
   }
}

// ham tao thanh phan
Element* CreateElement(int data){
    Element *e=new Element;
    e->data=data;
    e->next=NULL;
    e->prev=NULL;
    return e;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
