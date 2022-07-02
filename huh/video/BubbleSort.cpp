#include<iostream>
using namespace std;
void bubbleSort(int ls[],int sz){
    for(int u=0;u<sz;u++){// 1 5 7 8
                        //    
        for(int v=0;v<sz-u-1;v++){
            if(ls[v+1]<ls[v])
                swap(ls[v],ls[v+1]);
        }
    }
    for(int u=0;u<sz;u++)
        cout<<ls[u]<<" ";
}
void insertionSort(int ls[],int sz){
    for(int u=1;u<sz;u++){ //1 4 21 454 1
        int key = ls[u],
            v = u-1;
        while(ls[v]>key && v>=0)
            ls[v+1]=ls[v],v--;
        ls[v+1]=key;
    }
    for(int u=0;u<sz;u++)
        cout<<ls[u]<<" ";
}
int partition(int ls[],int leftIndex,int rightIndex){
    int u=leftIndex,
        pivotKey = rightIndex;

    for(int v=leftIndex;v<rightIndex;v++)
        if(ls[v]<=ls[pivotKey])
            swap(ls[u],ls[v]),u++;
    swap(ls[pivotKey],ls[u]);
    return u;
}
void quickSort(int ls[],int leftIndex,int rightIndex){
    if( leftIndex < rightIndex){
        int pivotIndex 
            =partition(ls,leftIndex,rightIndex);
        quickSort(ls,leftIndex,pivotIndex-1);
        quickSort(ls,pivotIndex+1,rightIndex);
    }

}
void heapify(int ls[],int sz,int node){
    int leftChild = node*2 + 1,
        rightChild = node*2 + 2,
        largestNode = node;

    if(leftChild<sz && ls[leftChild]>ls[largestNode])
        largestNode = leftChild;
    if(rightChild<sz && ls[rightChild]>ls[largestNode])
        largestNode = rightChild;
    
    if(largestNode != node){
        swap(ls[node],ls[largestNode]);
        heapify(ls,sz,largestNode);
    }
     
}
void heapSort(int ls[],int sz){
    //Build max heap
    for(int u=sz/2;u>=0;u--)
        heapify(ls,sz,u);
    
    //code for sorting
    for(int u=sz-1;u>=0;u--){
        swap(ls[u],ls[0]);
        //heapify the root
        heapify(ls,u,0);
    }

    for(int u=0;u<sz;u++)
        cout<<ls[u]<<" ";
}
void merge(int ls[],int leftIndex,int mid,int rightIndex){
    int nl = mid - leftIndex + 1,
        nr = rightIndex - mid,
        L[nl],
        R[nr];
    for(int u=0;u<nl;u++) L[u] = ls[leftIndex+u];
    for(int u=0;u<nr;u++) R[u] = ls[leftIndex +u];

    int u=0,
        v=0,
        k=leftIndex;
    while(u<nl||v<nr){
        if(u<nl&&v<nr){
            if(L[u]<=R[v])
                ls[k]=L[u++];
            else ls[k]=R[v++];
        }
        else{
            if(u<nl)
                ls[k]=L[u++];
            if(v<nr)
                ls[k]=R[v++];
        }
    k++;}

}
void mergeSort(int ls[],int leftIndex,int rightIndex){
    if( rightIndex < leftIndex)
        return;
    int mid = (leftIndex + rightIndex )/2;
    mergeSort(ls,leftIndex,mid);
    mergeSort(ls,mid+1,rightIndex);
    merge(ls,leftIndex,mid,rightIndex);
}
void binarySearch(int ls[],int sz,int value){
    int low=0,
        hi=sz-1,
        mid,
        foundAt = 0;
    while(low<=hi){
        mid= (low+hi)/2;

        if(ls[mid]<value)
            low = mid+1;
        else if(ls[mid]>value)
            hi = mid - 1;
        else{
            foundAt = mid+1;
            break;
        }
    }
    if(foundAt) cout<<"Found at position: "<<foundAt<<"\n";
    else cout<<"Not found\n";
}
void linearSearch(int ls[],int sz,int value){
    int foundAt = 0;

    for(int u=0;u<sz;u++)
        if(ls[u]==value) 
            foundAt=u+1;
    if(foundAt) cout<<"Found at position: "<<foundAt<<"\n";
    else cout<<"Not found\n";
}

int main(){
    int list[] = {1 , 33, 54, 400,545,19,3,454,4,54, 9, 45,12};
    int listSize =  13;

    quickSort(list,0,12);
    for(int u=0;u<listSize;u++)
        cout<<list[u]<<" ";
    
}