#include<iostream>
#include<string>
using namespace std;

void Sort(string arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0; j<n-1-i;j++){
            if(arr[j].length()>arr[j+1].length()){
                string temp =arr[j];
                arr[j] =arr[j + 1];
                arr[j+1] =temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of : ";
    cin>>n;
    cin.ignore();

    string arr[n];
    cout<<"Enter "<<n<<" strings: ";
    for(int i=0; i<n; i++){
        getline(cin, arr[i]);
    }

    Sort(arr, n);

    cout<<"Sorted by string length: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}
