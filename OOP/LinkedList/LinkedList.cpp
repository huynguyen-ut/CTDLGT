#include "LinkedList.h"

LinkedList::LinkedList()
{
    //ctor
    this->head=NULL;
    this->tail=NULL;
    this->numElement=0;
}
/** @brief (one liner)
  *
  * (documentation goes here)
  */
void LinkedList::addTail(Element* E)
{

}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void LinkedList::addFirst(Element* E)
{
    if(this->head=NULL)
    {
        this->head=E;
        this->tail=E;
    }else{
        E->getLeft=this.head;
        this->head=E;
    }
}
/** @brief (one liner)
  *
  * (documentation goes here)
  */
void LinkedList::TravelList()
{
    Element *p=this.head;
    while(p!=NULL){
        cout<<p->getData;
        p=p->getLeft();
    }
}



LinkedList::~LinkedList()
{
    //dtor
}
