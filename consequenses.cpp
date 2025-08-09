// Ques: Find the Longest Consecutive Subsequence after sorting an array

#include <iostream>

using namespace std;
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

    int n, i;

    cout<<"enter elements number: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

Sort(arr, n);

    int cnt=1;
    int result=1;

    for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1])
            continue;

    if(arr[i]==arr[i-1]+1){
        cnt++;
    }
    else{
        cnt=1;
    }

result=max(result, cnt);
}

cout<<"Longest subsequence is: "<< result;

}

//Dont copy these from here in your compiler 
Output: 
enter elements number:                                         
7
Enter the elements of the array: 1 9 3 10 4 20 2
Longest subsequence is: 4


