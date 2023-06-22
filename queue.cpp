#include<iostream>
#include<queue>
using namespace std;

void printQueue(queue<int> queue){
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