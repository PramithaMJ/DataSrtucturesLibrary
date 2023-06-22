#include<iostream>
#include<queue>
using namespace std;

void printQueue(queue<int>& queue){
    while(!queue.empty()){
       cout<<queue.front()<<" ";
       queue.pop();
    }
}

int main(){
    //FIFO Data Stucture

    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);

    cout<<"Size is: "<<myQueue.size()<<endl;
    cout<<"First element is: "<<myQueue.size()<<endl;
    cout<<"Last element is: "<<myQueue.back()<<endl;

    cout<<"My queue: "<<endl;
    printQueue(myQueue);

}

// -----------------------------------------------------*****---------------------------------------------------------------------------
/*  
    The difference between using void printQueue(queue<int>& queue) and
    void printQueue(queue<int> queue) lies in how the queue parameter is passed to the function.

    void printQueue(queue<int>& queue): 
    This function parameter is passed by reference (&).
    When the queue is passed by reference,
    any modifications made to the queue inside the function will affect the original queue passed from the caller.
    In other words, the function operates directly on the original queue without creating a copy.
    This can be useful when you want to modify the original queue or avoid unnecessary copying of large data structures.

    void printQueue(queue<int> queue): 
    This function parameter is passed by value.
    When the queue is passed by value, a copy of the queue is created and passed to the function.
    Any modifications made to the queue inside the function will not affect the original queue passed from the caller.
    This means that changes made to the queue inside the function are local to the function and do not affect the original queue.
*/