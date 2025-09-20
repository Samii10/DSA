#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int k){
    int left=0, right=n-1, middle;
    while(left<=right){
            middle=(left+right)/2;
            if(arr[middle]==k){
                return middle;
            }
            else if(arr[middle]<k){
                left=middle+1;
            }
            else{
                right=middle-1;
            }
    }
    return -1;
}
int firstOccurance(int arr[], int n, int k){
    int left=0, right=n-1, result=-1;

    while(left<=right){
        int mid=(left+right)/2;

    if(arr[mid]==k){
        result= mid;
        right=mid-1;
    }
    else if(arr[mid]<k){
        left=mid+1;
    }
    else{
        right=mid-1;
    }
    }
    return result;
}

int lastOccurance(int arr[], int n, int k){
    int left=0, right=n-1, mid, result=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==k){
            result=mid;
            left=mid+1;
        }
        else if(arr[mid]<k){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return result;
}

int main(){
    int n, k;
    cout<<"Enter your elements number: ";
    cin>>n;

    int arr[n];

    cout<<"Enter your elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Search value: ";
    cin>>k;

    int index=binarySearch(arr, n, k);
    int first=firstOccurance(arr, n, k);
    int last=lastOccurance(arr, n, k);

    if(first==-1){
        cout<<"not found";
    }
    else{
        cout<<"First occurrence: "<<first<<endl;
        cout<<"Last occurrence: "<<last<<endl;
    }

    return 0;
}
