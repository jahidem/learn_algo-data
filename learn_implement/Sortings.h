#include<iostream>
#include <ctime>
#include <chrono>
#include <thread>

using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::duration;
using std::chrono::milliseconds;

class Sortings{

public:
    Sortings(int size){
        elements = new int[size];
        unsortedElements = new int[size];
        this->size= size;
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        fillWithRandomElement();
    }
    void applyMergeSort(){
        loadUnsorted();
        const std::string exec= "Executed MergeSort() in : ";
        for(char x:exec){
            std::cout<<x;
            using namespace std::chrono_literals;
            std::this_thread::sleep_for(20ms);
        }
        auto t1 = high_resolution_clock::now();
        mergeSort(0,size-1);
        auto t2 = high_resolution_clock::now();


        /* Getting number of milliseconds as a double. */
        duration<double, std::milli> ms_double = t2 - t1;
        std::cout << ms_double.count() << "ms\n";
    }
    void applyInsertionSort(){
        loadUnsorted();
        const std::string exec= "Executed InsertionSort() in : ";
        for(char x:exec){
            std::cout<<x;
            using namespace std::chrono_literals;
            std::this_thread::sleep_for(20ms);
        }
        auto t1 = high_resolution_clock::now();
        insertionSort();
        auto t2 = high_resolution_clock::now();


        /* Getting number of milliseconds as a double. */
        duration<double, std::milli> ms_double = t2 - t1;
        std::cout << ms_double.count() << "ms\n";
    }
    int applyHeapSort(){
        loadUnsorted();
        const std::string exec= "Executed HeapSort() in : ";
        for(char x:exec){
            std::cout<<x;
            using namespace std::chrono_literals;
            std::this_thread::sleep_for(20ms);
        }
        auto t1 = high_resolution_clock::now();
        heapSort();
        auto t2 = high_resolution_clock::now();


        /* Getting number of milliseconds as a double. */
        duration<double, std::milli> ms_double = t2 - t1;
        std::cout << ms_double.count() << "ms\n";
    }

    void print(){
        for(int u=0;u<size;u++)
            std::cout<<elements[u]<<" ";
        std::cout<<"\n";
    }

private:
    void merge(int p,int q,int r){
        int n1 = q-p+1,
                n2 = r-q;
        int ls[n1+1],la[n2+1];
        for(int u=0;u<n1;u++)
            ls[u]=elements[p+u];
        for(int u=0;u<n2;u++)
            la[u]=elements[u+q+1];

        int u=0,v=0;
        for(int i=p;i<=r;i++){
            if(u<n1 && v<n2){
                if(ls[u]<la[v])
                    elements[i]=ls[u],u++;
                else
                    elements[i]=la[v],v++;
            }
            else if(u<n1)
                elements[i]=ls[u],u++;
            else
                elements[i]=la[v],v++;
        }
    }
    void mergeSort(int left,int right){
        if(left<right){
            int mid=(left+right)/2;
            mergeSort(left,mid);
            mergeSort(mid+1,right);
            merge(left,mid,right);
        }

    }

    void insertionSort(){
        for(int key=1;key<size;key++){
            int u=key;

            while(u>0 && elements[u]<elements[u-1]){
                std::swap(elements[u],elements[u-1]);
                u--;}
        }
    }

    void heapify(int parent,int sz){
        int largest = parent,
            leftChild = parent*2+(!parent),
            rightChild = parent*2+1;
        if(leftChild<sz && elements[leftChild]> elements[largest])
            largest = leftChild;
        if(rightChild<sz && elements[rightChild]> elements[largest])
            largest = rightChild;
        std::swap(elements[parent],elements[largest]);
        if(largest!=parent)
            heapify(largest,sz);
    }
    void heapSort(){
        for(int u=size/2;u>=0;u--)
            heapify(u,size);
        int heapSize=size;
        while(heapSize){
            heapify(0,heapSize);
            std::swap(elements[0],elements[heapSize-1]),
            heapSize--;}

    }

    void fillWithRandomElement(){
        for(int u=0;u<size;u++) {

            unsortedElements[u] = elements[u] = (std::rand());
            }
        }
    void loadUnsorted(){
        for(int u=0;u<size;u++)
            elements[u]=unsortedElements[u];
    }
    int *elements,*unsortedElements;
    int size;
};