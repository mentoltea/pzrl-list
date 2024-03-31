#include "List.h"


List func() {
    double arr[] = {33,-22,-11};
    List l(arr,3);
    return l;
}

using namespace std;

int main() {
    double arr[] = {1, 2, 3, 0.1, 0.2, 0.3, -5.5};
    double arr2[] = {10,20,30};
    List l1(arr, 7);

    List l2(l1);
    
    List l3 = l2;

    l3 = func();
    List l4 = func();

    l1.print();
    auto it = l1.begin();
    
    getchar();
    //l1.print();

    return 0;
}