#include<iostream>
using namespace std;
int arr[100]={};
int front=0,back=0,sz=100;
void push(int value){
    arr[back]=value;
    back++;back%=sz;
}
void pop(){
    front++;front%=sz;
}
void print(){
    int nw = front;
    while(nw!=back){
        cout<<arr[nw]<<" ";
        nw++;nw%=sz;
    }
}

int main(){
    int choose;
    while(1){
        cout<<"press-> 1 to push elements into the queue\n\t2 to pop() operation\n\t3 to print the whole queue\n:";
        cin>>choose;
        if(choose==1){
            int val;cin>>val;
            push(val);
        }
        else if(choose==2){
            pop();
        }
        else if(choose==3)
            print();
        else break;
    }
}