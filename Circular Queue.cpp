#include<iostream>
using namespace std;

class CircularQueue{
    int* arr;
    int currsize, cap;
    int f, r;
public:
    CircularQueue(int size){
        currsize=0;
        cap=size;
        arr= new int[cap];
        f=0, r=-1;
    }

    void enqueue(int data){
        if(currsize==cap){
            cout<<"Queue has been full";
            return;
        }
        r=(r+1)%cap;
        arr[r]=data;
        currsize++;
    }
    void dequeue(){
        if(empty()){
            cout<<"Queue is empty";
            return;
        }
        f=(f+1)%cap;
        currsize--;
    }
    int front(){
       if(empty()){
            cout<<"Queue is empty";
            return -1;
        }
        return arr[f];
    }

    bool empty(){
        return currsize==0;
    }

    void printArr(){
        for(int i=0; i<cap; i++){
            cout<<arr[i]<<" ";
        }

    }

};
int main(){
    CircularQueue cq(3);

    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(1);
    cq.dequeue();
    cq.enqueue(9);

    while(!cq.empty()){
        cout<<cq.front()<<" ";
        cq.dequeue();
    }
    return 0;
}
