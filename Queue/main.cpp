#include <iostream>

using namespace std;
struct Element{
    int data;
    Element* next;
};
struct Queue{
    Element * Head;
    Element * Tail;
};
Element* CreateElement(int data){
    Element *e=new Element;
    e->data=data;
    e->next=NULL;
    return e;
}
void InitQueue(Queue& S){
    S.head=S.Tail=NULL;
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
