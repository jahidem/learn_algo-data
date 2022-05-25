#include <iostream>
#include "Sortings.h"
using namespace std;

int main() {
    Sortings obj(100000);
    obj.applyMergeSort();
    obj.applyInsertionSort();
    obj.applyHeapSort();
}
