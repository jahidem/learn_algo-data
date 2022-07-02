/*
Question: Suppose you have the GPA 
    (Grade Point Average) of n number of students,
     and you need to store and display it using C++.
      Can you write a program that accomplishes this?
*/
#include<bits/stdc++.h>
using namespace std;
class GpaData{
    public:
        GpaData(int size=100):gpaCount{size}{
            allGpa = vector<float> (gpaCount);
            curIndex=0;
        }
    void insert(float gpa){
        if(curIndex<gpaCount)
            allGpa[curIndex]=gpa;
        else 
            allocateMore(),allGpa[curIndex]=gpa;
        curIndex++;
    }
    void print(){
        if(!curIndex) cout<<"Empty\n";
        else cout<<"All stored GPA are:\n";

        for(int u=0;u<curIndex;u++)
            cout<<allGpa[u]<<"\n";
    }
    void allocateMore(){
        gpaCount*=2;
        vector<float> tm(gpaCount);
        for(int u=0;u<curIndex;u++)
            tm[u]=allGpa[u];
        allGpa.clear();
        allGpa=tm;
    }
    private:
    vector<float> allGpa;
    int gpaCount;
    int curIndex;
};
int main(){
    int n;
    cout<<"enter number of students: ";
    cin>>n;
    GpaData newData(n);
    cout<<"Enter all GPA:\n";
    while(n--){
        float gpa; 
        cin>>gpa;
        newData.insert(gpa);
    }
    newData.print();
}