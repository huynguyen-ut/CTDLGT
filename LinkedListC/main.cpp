#include <iostream>

using namespace std;
struct Element{
    int data;
    Element* next;

};
struct LinkedListC{
    Element *head;
    Element *tail;

};
void initList(LinkedListC& L){
    L.head=L.tail=NULL;
}
// ham tao thanh phan
Element* CreateElement(int data){
    Element *e=new Element;
    e->data=data;
    e->next=NULL;
    return e;
}
void InsertFirst(Element *e, LinkedListC &L){
   if(L.head==NULL){
    L.head=e;
    L.tail=e;
    e.next=e;
    }
   else{
    e->pointer=L.head;
    L.head=e;
    L.tail->next=e;
   }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
