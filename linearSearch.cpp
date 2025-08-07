#include<iostream>
using namespace std;
int main(){

    int key, arr[10], i;
    cout<<"Enter 10 numbers :"<<endl;
    for(i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<"Enter a number to search: "<<endl;
    cin>>key;

    for(i=0; i<10; i++){
        if(key==arr[i]){
            cout<<"The index number is: "<<i;
            return i;
        }
        return -1;
    }
}
