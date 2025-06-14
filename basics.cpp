// address is a hexadecimal value
// Pointers are special variables used to store addresses
// The type of a pointer variable should be same as the type of the value stored at the memory location it points to  
// even the pointer variable would have its own address

#include<iostream>
using namespace std;

int main()
{
    int a=5;
    cout<<&a; //gives the address of a

    int *ptr1; //using this u can store address of a variable storing integer value/ int variable

    float *ptr2; //using this u can store address of a variable storing float value/ float variable
}