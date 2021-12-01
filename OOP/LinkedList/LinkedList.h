#ifndef LINKEDLIST_H
#define LINKEDLIST_H


class LinkedList
{
    public:
        LinkedList();
        void addFirst(Element *E);
        void addTail(Element *E);
        int deleteFirst();
        void TravelList();
        virtual ~LinkedList();

    protected:

    private:
        int numElement;
        Element *head;
        Element *tail;

};

#endif // LINKEDLIST_H
