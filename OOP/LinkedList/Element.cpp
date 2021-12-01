#include "Element.h"

Element::Element()
{
    //ctor
    this->data=0;
    this->left=null;
    this->right=NULL;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Element::Element(int data)
{
     this->data=data;
     this->left=NULL;
     this->right=NULL;
}
/** @brief (one liner)
  *
  * (documentation goes here)
  */
Element* Element::getLeft()
{
    return this->left;
}

Element::~Element()
{
    //dtor
}
