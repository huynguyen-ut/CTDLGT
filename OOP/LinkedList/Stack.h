#ifndef STACK_H
#define STACK_H


class Stack
{
    public:
        Stack();
        void push(int x);
        int pop();
        int getNum();
        virtual ~Stack();

    protected:

    private:
        int num;
        LinkedList List;
};

#endif // STACK_H
