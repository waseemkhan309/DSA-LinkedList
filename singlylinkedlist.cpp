// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
    private:
    int data;
    node* next;
    public:
    node(int data){
        this->data=data;
        this->next=next;
    }
    void setData(int data){
        this->data=data;
    }
    void setNext(node* next){
        this->next=next;
    }
    int getData(){
        return data;
    }
    node* getNext(){
        return next;
    }
};
class Singlylinkedlist{
    private:
    node *head;
    public:
    Singlylinkedlist(){
        head=NULL;
    }
    // inserAtBeg
    void insertAtBeg(int val){
        node* temp=new node(val);
    if(head==NULL){
        head=temp;
    }else{
        temp->setNext(head);
        head=temp;
    }
    }
    // insertAtLast
    void insertAtLast(int val){
        node* temp=new node(val);
        node* last=head;
        while(last->getNext()!=NULL){
            last=last->getNext();
        }
        last->setNext(temp);
        last=temp;
    }
    // LastNode Data
    void LastNodeData(){
        node* last=head;
        while(last->getNext()!=NULL){
            last=last->getNext();
        }
        cout<<"data of last node = "<<last->getData()<<endl;
    }
    //Data of !st node
    void FirstNodeData(){
        node* first=head;
        cout<<"data of first node = "<<first->getData()<<endl;
    }
    // insertAtRandomPosi
    void insertAtRandomPosi(int val){
        node* temp=new node(val);
        node* temp1=head;
        int posi;
        cout<<endl;
        cout<<"Enter Random Posi = ";cin>>posi;
        for(int i=1;i<posi;i++){
            temp1=temp1->getNext();
        }
        temp->setNext(temp1->getNext());
        temp1->setNext(temp);
        
    }
    // Display
    void Display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->getData()<<"->";
            temp=temp->getNext();
        }
    }
    
    
};
int main() {
Singlylinkedlist s,s1;
s.insertAtBeg(20);
s.insertAtBeg(19);
s.insertAtBeg(18);
s.insertAtBeg(17);
s.insertAtLast(21);
s.insertAtLast(22);
s.insertAtLast(23);
s.LastNodeData();
s.FirstNodeData();
s.Display();
s.insertAtRandomPosi(33);
s.Display();
    return 0;
}