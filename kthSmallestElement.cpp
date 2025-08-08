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

    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the Kth value: ";
    cin>>k;

    Sort(arr, n);
    if(k>=1 && k<=n){
        cout <<"Smallest Kth value is: "<<arr[k-1];
    }
    else
        cout<<"Error! Not Found.:;
    return 0;
}

