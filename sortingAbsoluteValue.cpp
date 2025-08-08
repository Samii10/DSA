#include<iostream>
using namespace std;

//Here we have did it using "abs" with the loop of 'j'
//Also we can do it manually without using "abs" library
//For the we need to build a function manually which will work for absolute values

//Function is below: 
/*int absolute(int x){
    if(x< 0)
        return -x;
    else
        return x;
}*/

//If we want to use this function, we just have to implement the word "absolute" instead of "abs"

void Sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(abs(arr[j])>abs(arr[j+1])){
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
    cout << "Sorted by absolute value: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

        }

//Output only for example, don't copy this in your compiler: 
Enter the number of elements: 4
Enter 4 elements: -3 -2 -6 6 7
Sorted by absolute value: -2 -3 -6 6
