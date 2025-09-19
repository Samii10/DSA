#include<iostream>
using namespace std;


int main(){
    int n,k;
    cout<<"Enter the number of elements: ";
    cin>>n;
    if(n<=1){
        cout<<"Error! You have to give more than 1 element";
    }

    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int indices[n];
    int count=0;

    cout<<"enter the value you want to find: ";
    cin>>k;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            indices[count]=i;
            count++;
        }
    }

    if(count==0){
        cout<<"Number not found.";
    }
    else{
        cout<<"Indices: ";
        for(int i=0; i<count; i++){
            cout<<indices[i];
        }
    }

}
