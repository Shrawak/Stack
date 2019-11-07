
#define STACK_H

#define MAX 100
class Stack{
    public :
        Stack();
        ~Stack();
        void push(int element);
        int pop();
        int tops();
        bool isEmpty();
    private:
        int element[MAX];
        int top;

};
