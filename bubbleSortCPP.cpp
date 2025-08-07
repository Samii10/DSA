#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    if(n<=1){
        cout<<"You have to enter more than 1 element";
    }

    int arr[n];
    cout<<"Enter "<<n<<" elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    bubbleSort(arr, n);
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


