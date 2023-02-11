// Queue using Array

#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
  Queue(){size = 10; front = rear = -1; Q = new int[size];}
    Queue(int size){this->size = size; front = rear = -1; Q = new int[this->size];}
    void enqueue(int x);
    int dequeue();
    void display();
};
void Queue::enqueue(int x){
    if(rear==size-1)
    cout<<"queue is full"<<endl;

    else
    {
        rear++;
        Q[rear]=x;
    }
}

int Queue::dequeue(){
    int x=-1;
    if(rear==front)
    cout<<"queue is empty"<<endl;

    else
    {
        x=Q[front+1];
        front++;
    }

    return x;
}

void Queue::display(){

    for(int i=front+1;i<=rear;i++){
        cout<<Q[i]<<" ";
    }
    cout<<endl;
}

int main(){

    Queue q(5);

    q.enqueue(20);
    q.enqueue(10);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.display();




    return 0;
}