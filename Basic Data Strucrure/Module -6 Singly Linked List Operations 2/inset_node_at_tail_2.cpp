#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
    int val ;
    Node * next;
    
 Node(int val){

    this->val = val;
    this->next = NULL;
 }
};
void insert_Node_at_tail( Node * & head, int v){
    
    Node * newNode = new Node(v);
    Node * tmp = head;

    if(head == NULL){
        head = newNode;
        return;
    }

    
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next=newNode;

    

}
void print_linked_list(Node * head){
    cout<<"Your Linked List ";
    Node * tmp =  head;

    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;

    }
    cout<<endl;
}

void insert_Node_at_any_position(Node * head,int pos,int v){

    Node * newNode = new Node(v);
    Node * tmp = head;
    for(int i = 1;i < pos-1;i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
int main(){
    
    Node * head = NULL;

    while(true){
        cout<<"Option-1 : Insert a Node at tail "<<endl;
        cout<<"Option-2 : Print All Node "<<endl;
        cout<<"Option-3 : Insert Node at any position"<<endl;
        cout<<"Option-4 : Terminate "<<endl;

        int op;
        cin>>op;
        if(op == 1){

            cout<<"Please Enter a value :";
            int v;
            cin>>v;
            insert_Node_at_tail(head,v);

        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if(op == 3){
            int pos,v;
            cout<<"Enter a position ";
            cin>>pos;
            cout<<"Enter a value ";
            cin>>v;
            insert_Node_at_any_position(head,pos,v);

        }
        else if (op == 4)
        {

            break;
        }
        
        

    }
     
    return 0;
}