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
    Sort(arr, n);
    int m,l;
    l=arr[1]-arr[0];
    for(int i=0; i<n; i++){
        m=arr[i+1]-arr[i];
        if(m<l){
            l=m;

        }
    }
    cout<<"Smallest difference is: "<<l;

}
