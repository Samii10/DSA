#include<iostream>
using namespace std;

int main(){
    int no_of_vertex, graph[100][100];
    char vertex[26];
    for(int i=0; i<26; i++){
        vertex[i]=i+65;
    }
    cout<<"How many vertex: "<<endl;
    cin>>no_of_vertex;

     for(int i=0; i<no_of_vertex; i++)
    {
        for(int j=0; j<no_of_vertex; j++){
            graph[i][j]=0;
        }
    }
    for(int i=0; i<no_of_vertex; i++)
    {
        for(int j=i+1; j<no_of_vertex; j++){

            cout<<vertex[i]<<"-"<<vertex[j]<<" connected? :  ";
            cin>>graph[i][j];
            if(graph[i][j]==1){
                graph[j][i]=1;
            }

            }
        }

    for(int i=0; i<no_of_vertex; i++)
    {
        for(int j=0; j<no_of_vertex; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
