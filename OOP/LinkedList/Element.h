#ifndef ELEMENT_H
#define ELEMENT_H


class Element
{
    public:
        Element();
        Element(int data);
        void setData(int data);
        int getData();
        Element * getLeft();
        virtual ~Element();

    protected:

    private:
        int data;
        Element *right;
        Element *left;
};

#endif // ELEMENT_H
