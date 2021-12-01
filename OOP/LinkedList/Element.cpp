#include "Element.h"

Element::Element()
{
    //ctor
    this.data=0;
    this.left=NULL;
    this.right=NULL;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Element::Element(int data)
{
     this.data=data;
     this.left=NULL;
     this.right=NULL;
}


Element::~Element()
{
    //dtor
}
