#include "LinkedList.h"

LinkedList::LinkedList()
{
    //ctor
    this.head=NULL;
    this.tail=NULL;
    this.numElement=0;
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
    if(this.head=NULL)
    {
        this.head=E;
        this.tail=E;
    }else{
        E.left=this.head;
        this.head=E;
    }
}


LinkedList::~LinkedList()
{
    //dtor
}
