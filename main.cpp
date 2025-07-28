#include<iostream>
using namespace std;

int main(){

    int a[]={0,3,6,1,3,4};
    int temp;
    int n=sizeof(a)/sizeof(a[0]);
    int i, j;

    for(i=1; i<n; i++){
        temp= a[i];
        j=i-1;
        while (a[j]>temp && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }

cout<<"Sorted array: ";
    for (i=0; i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
