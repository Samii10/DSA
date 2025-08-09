#include<iostream>
using namespace std;

void Sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter your elements number: ";
    cin>>n;

    int arr[n];

    cout<<"Enter your elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Sort(arr, n);
    int key;

    cout<<"Enter the number you want to search: ";
    cin>>key;

    int left, right, middle;
    left=0;
    right=n-1;
    while(left<=right){
    middle=(left+right)/2;
    if(arr[middle]==key){
        cout<<key<<" Found at index: "<<middle;
        break;
    }
    else if(arr[middle]<key){
        left=middle+1;
    }
    else{
        right= middle-1;
    }
    }
return 0;
}
