#include "Stack.h"

Stack::Stack()
{
    //ctor
}
/** @brief (one liner)
  *
  * (documentation goes here)
  */
int Stack::getNum()
{

}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
int Stack::pop()
{
    return this.List.deleteFirst();
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Stack::push(int x)
{
    this.List.addFirst(new Element(x));
}


Stack::~Stack()
{
    //dtor
}
