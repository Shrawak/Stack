#include<iostream>
#include "Stack.h"

Stack::Stack()
{
    top=-1;
}
Stack::~Stack(){}

void Stack::push(int elements)
{
    if(top>=MAX)
    {
        std::cout<<"Cannot push"<<element<<"Stack overflow";
    }
    else
    {
        top++;
        this-> element[MAX]=elements;
    }
}
int Stack::pop()
{
    if(top<0)
    {
        std::cout<<"Cannot pop an element";

    }
    else
    {
        int val=element[top];
        top--;
        return val;
    }
}

bool Stack ::isEmpty()
{
    return top<0;
}
int Stack ::tops()
{
    if(!isEmpty())
    {
        int val=element[top];
        return val;
    }
    else
    {
        return -1;
    }
}
