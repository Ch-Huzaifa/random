#include<iostream>
using namespace std;

class node{
    public :
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class linkedlist{
    node* head;
    node* tail;

    public:
    linkedlist(){
        head=NULL;
        tail=NULL;
    }
    void insertathead(int val){
        node* newnode=new node(val);
        if (head==NULL)
        {
            head=tail=NULL;
            return;
        }
        newnode->next=head;
        head=newnode; 
    }
    void insertatend(int val){
        node* newnode=new node(val);
        if (head==NULL)
        {
            head=tail=NULL;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void insertatpos(int val;int pos);{
        node* newnode=new node(val);
        


    }
};