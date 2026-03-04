// int a = 10;

// heap 必须delete, gpu变成大量用heap
//int* p = new int(10);

//pointer
// int x = 5;
// int* p = &x;

// new/delete
// int* arr = new int[10];
// delete[] arr; 如果忘记啦delete = memory leak

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << "a value: " << a << endl;
    cout << "a address: " << &a << endl;

    int* p = &a;
    cout << "&a value (address): (i think its p value)" << &a << endl;
    cout << "p value (address): " << p << endl;
    cout << "*p value: " << *p << endl;

    int* heapValue = new int(20);
    cout << "heap value: " << *heapValue << endl;
    cout << "heap address: " << heapValue << endl;

    delete heapValue;

    return 0;
}

