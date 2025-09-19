#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int k){
    int left=0, right=n-1, middle;
    while(left<=right){
            middle=(left+right)/2;
            if(arr[middle]==k){
                return middle;
            }
            else if(arr[middle]>k){
                left=middle+1;
            }
            else{
                right=middle-1;
            }
    }
    return -1;
}
int main(){
    int n, k;
    cout<<"Enter your elements number: ";
    cin>>n;

    int arr[n];

    cout<<"Enter your elements in descending order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Search value: ";
    cin>>k;
    int index=binarySearch(arr, n, k);

    if(index!=-1){
        cout<<"Found at: "<<index<<endl;
    }
    else{
        cout<<"Not found!"<<endl;
    }
}
