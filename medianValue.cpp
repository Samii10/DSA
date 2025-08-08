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
int median(int arr[], int n){

 Sort(arr, n);

    if(n%2 !=0){
        return arr[n/2];
    }
    else
        return(arr[n/2-1]+arr[n/2])/2;
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

    int Median=median(arr, n);
    cout<<"Median is: "<<Median;
    return 0;
}
