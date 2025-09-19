#include<iostream>
using namespace std;

int findgreater(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i]>k){
            return arr[i];
        }
    }
    return -1;
}

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

    cout<<"Search: ";
    cin>>k;

    int output=findgreater(arr, n, k);

    if(output==-1){
        cout<<"Not found!";
    }
    else{
        cout<<"Output: "<<output;
    }
    return 0;
}
