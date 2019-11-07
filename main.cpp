#include<iostream>
#include "Stack.h"
using namespace std;

int main()
{   int i;
    Stack s;
    s.push(5);
    s.push(7);
    s.push(9);


    int popp =s.pop();
    cout<<popp<<endl;

}

