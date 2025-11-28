struct Node{
    int data;
    Node *next;
};
int main(){
   Node *head ; Node *current;
   head=NULL;
   
   head=new Node;
   
   head->data=10;
   head->next=NULL;
   
    cout<<(*head).data<<endl;
    cout<<(*head).next;
    
    
    current= new Node;
    
    head->next=current;
    
    current->data=20;
    current->next=NULL;
    
    return 0;
}

