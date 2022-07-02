#include<iostream>
using namespace std;
struct node{
    int val;
    node *next;
};
node *root=nullptr;
void print(){
    node *currNode = root;
    while(currNode!=nullptr)
        cout<<currNode->val<<" ",
        currNode=currNode->next;
    cout<<"\n";
}
void insert(int val){
    node *newNode = new node;
    newNode->val = val;
    newNode->next = nullptr;

    if(root==nullptr)
        root = newNode;
    else{
        node *lastNode = root;
        while(lastNode->next != nullptr)
            lastNode = lastNode->next;
        lastNode->next = newNode;
    } 
}

void del(){
    node *lastNode = root,*prev=nullptr;
        while(lastNode!=nullptr
            &&lastNode->next != nullptr)
            prev=lastNode,
            lastNode = lastNode->next;
        if(prev==nullptr) root = nullptr;
        else if(prev==root) 
            root->next=nullptr;
        else{
            delete lastNode;
            prev->next = nullptr;}
}
int main(){
    while(1){
        int choo;cin>>choo;
        if(choo){
            int val;cin>>val;
            insert(val);}
        else del();
        print();
    }
}