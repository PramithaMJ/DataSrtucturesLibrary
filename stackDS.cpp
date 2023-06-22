#include <iostream>
#include <stack>

using namespace std;

void printStackElement(stack<int> stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main()
{

    // empty, size, push, pop, top
    stack<int> numbersStack;

    // add element to  stack
    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);
    numbersStack.push(4);

    // remove element in stack LIFO
    numbersStack.pop();
    numbersStack.pop();

    printStackElement(numbersStack);

    if(numbersStack.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
        cout<<"Stack size is : "<<numbersStack.size()<<endl;
    }
}