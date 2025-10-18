//Stack problem

#include<iostream>
using namespace std;

class Stack{
    char arr[100];
    int top;
public:
    Stack(){
        top=-1;
    }

    void push(char c){
        arr[++top]=c;
    }

    char pop(){
        if(top==-1){
            return '\0';
        }
        return arr[top--];
    }

    bool isEmpty(){
        return top==-1;
    }
};

bool isValied(string s){
    Stack st;

    for(char ch : s){
        if(ch=='(' || ch=='{' || ch=='[' ){
            st.push(ch);
           }
           else
           {
               char topChar=st.pop();

           if((ch==')' && topChar !='(') ||
              (ch=='}' && topChar !='{') ||
              (ch==']' && topChar !='[')){
                return false;
              }
              }
    }
    return st.isEmpty();
}

int main()
{
    string s;
    cout<<"Enter strings with brackets: "<<endl;
    cin>>s;

    if(isValied(s))
    {
        cout<<"Valid parentheses"<<endl;
    }
    else
    {
        cout<<"Invalid parentheses"<<endl;
    }
    return 0;

}


