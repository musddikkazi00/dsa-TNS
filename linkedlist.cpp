    
#include <bits/stdc++.h>

using namespace std;
class Node {
   public:
    int data ;
    Node * Next ;
    
    Node (int d){
        this ->data = d;
        this ->Next = NULL;
    }
};

void insertion(Node *&head ,Node * &tail, int d){
    if(head==NULL){
        Node* node1 = new Node(d);
        head = node1;
        tail = node1;
        return ;
    }
   
        Node * temp = new Node(d);
        tail->Next = temp ;
        tail = temp ;
}

void deleteNode(int d,Node * head){
    Node * temp = head;
    if(d == temp->data){
        head = temp ->Next ;
        delete temp ;
    }
    Node * nex = temp ->Next;
    
    while(nex  != NULL){
        if(d == nex->data){
            temp ->Next = nex->Next;
            delete nex;
            return ;
        }
        temp = temp ->Next;
        nex = nex->Next;
    }
    cout<<"Element is not present "<<endl;
}

void print(Node * &head ){
    Node * temp  =  head ;
    
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> Next; 
        
    }
}


int main()
{   
    Node * head = NULL;
    Node * tail = head ;
     int size ;
   cout<<" Enter the size of linked list : ";
   cin>>size;
   
   while(size--){
       int data ;
       cout<<" Enter the data : ";
       cin>>data;
       
       insertion(head , tail , data);
   }
    
    print(head);
    
    cout<<endl;
    
    deleteNode(3 , head);
    
    print(head);
    
    
    cout<<"Hello World";

    return 0;
}
