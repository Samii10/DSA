#include<iostream>
using namespace std;

struct node{
    int data;
    node* next=nullptr;
    node* prev=nullptr;

};

void addBegining(int value, node* &head, node* &tail){
    node* newnode= new node;
    newnode->data=value;
    newnode->next=nullptr;
    newnode->prev= nullptr;

    if(head==nullptr){
        head=newnode;
        tail=newnode;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}

void addInPosition(int value, node* &head, node* &tail, int position){
    if(head==nullptr){
        cout<<"Empty list."<<endl;
    }

    node* temp=head;
    int count=1;

    while(temp!=nullptr && count<position){
        temp=temp->next;
        count++;
    }
    if(temp==nullptr || temp->next==nullptr){
      cout<<"Can't take input."<<endl;
      return;
    }
    node* newnode= new node;
    newnode->data=value;
    newnode->next=nullptr;
    newnode->prev=nullptr;

    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next->prev=newnode;
    temp->next=newnode;

}

void addEnding(int value, node* &head, node* &tail){
    node* newnode= new node;
        newnode->data=value;

        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }

    void add_after_Position(int value, node* &head, node* &tail, int position){
    if(head==nullptr){
        cout<<"Empty list."<<endl;
    }

    node* temp=head;
    int count=1;

    while(temp!=nullptr && count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp==nullptr || temp->next==nullptr){
      cout<<"Can't take input."<<endl;
      return;
    }
    node* newnode= new node;
    newnode->data=value;
    newnode->next=nullptr;
    newnode->prev=nullptr;

    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next->prev=newnode;
    temp->next=newnode;

}
int sumofNodes(node* head) {
    int sum=0;
    node* temp=head;
    while(temp!=nullptr) {
        sum+=temp->data;
        temp=temp->next;
    }
}

int multiplyinhNodes(node* head) {
    int multi=1;
    node* temp=head;
    while(temp!=nullptr) {
        multi*=temp->data;
        temp=temp->next;
    }
    return multi;
}

void deleteBeginning(node* &head, node* &tail){
    node* temp=head;
    if(head==tail){
        head=nullptr;
        tail=nullptr;
    } else{
        head=head->next;
        head->prev=nullptr;
    }
    delete temp;
}

void deleteEnding(node* &head, node* &tail){
    node* temp=tail;
    if(head==tail){
        head=nullptr;
        tail=nullptr;
    } else{
        tail=tail->prev;
        tail->next=nullptr;
    }
    delete temp;
}

void deletePosition(node* &head, node* &tail, int posi){
    node* temp=head;
    int count=1;
    while(temp!=nullptr && count<posi){
        temp=temp->next;
        count++;
    }
    if(temp==nullptr){
            return;
    }

    else if(temp==head){
            deleteBeginning(head, tail);
    }
    else if(temp==tail){
            deleteEnding(head, tail);
    }
    else{
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete temp;
    }
}
void reverseList(node* &head, node* &tail) {

    node* temp = nullptr;
    node* current = head;

    while (current!=nullptr) {
        temp = current->prev;
        current->prev=current->next;
        current->next=temp;

        current =current->prev;
    }


    if (temp!= nullptr)
        head = temp->prev;

    node* swapTemp=head;
    head=tail;
    tail=swapTemp;
}


int main(){
    node* head= nullptr;
    node* tail=nullptr;

    int n, elements, i, select;
    cout<<"Enter the numbers of nodes: ";
    cin>>n;

    for(i=0; i<n; i++){
        cout << "Enter value for node "<<i+1<< ": ";
        cin >> elements;
     addEnding(elements, head, tail);
    }
    cout<<"List is: ";
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
while(true){
    cout<<" "<<endl;
    cout<<"Menu"<<endl;
    cout<<" "<<endl;
    cout<<"0. Exit!"<<endl;
    cout<<"1. Add new node at the beginning."<<endl;
    cout<<"2. Add new node at the ending."<<endl;
    cout<<"3. Add new node in position(after)."<<endl;
    cout<<"4. Add new node in position(before)."<<endl;
    cout<<"5. Sum of the nodes."<<endl;
    cout<<"6. Multiplication of nodes."<<endl;
    cout<<"7. Delete the first node."<<endl;
    cout<<"8. Delete the last node."<<endl;
    cout<<"9. Delete position."<<endl;
    cout<<"10. Reverse the list."<<endl;
    cout<<" "<<endl;
    cout<<"Select your option: ";
    cin>>select;
    if(select==1){
        int data;
        cout<<"Enter element: ";
        cin>>data;

        addBegining(data, head, tail);
    }

    else if(select==2){
        int data;
        cout<<"Enter element: ";
        cin>>data;

        addEnding(data, head, tail);
    }
    else if(select==3){
        int data;
        int posi;
        cout<<"Enter element: ";
        cin>>data;
        cout<<"Enter position: ";
        cin>>posi;
        addInPosition(data, head, tail, posi);
    }
    else if(select==4){
        int data;
        int posi;
        cout<<"Enter element: ";
        cin>>data;
        cout<<"Enter position: ";
        cin>>posi;
        add_after_Position(data, head, tail, posi);
    }
    else if(select==0){
        cout<<"Exited: ";
        break;
    }
    else if(select==5){
    cout << "Sum of all nodes: " <<sumofNodes(head)<< endl;
    }

    else if(select==6){
    cout << "Multiplication of all nodes: "<<multiplyinhNodes(head)<<endl;
    }

    else if(select==7){
        deleteBeginning(head, tail);
    }

    else if(select==8){
        deleteEnding(head, tail);
    }

    else if(select==9){
            int posi;
            cout << "Enter position: ";
            cin >> posi;
            deletePosition(head, tail, posi);
    }
    else if(select==10){
          reverseList(head, tail);
          cout<<"Reversed!"<<endl;
    }

    temp=head;
    cout<<" "<<endl;
    cout<<"Updated list is: "<<endl;
    temp=head;
     while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}
}


