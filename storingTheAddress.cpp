// address is a hexadecimal value
// '&' is called "address of" operator
// Pointers are special variables used to store addresses
// The type of a pointer variable should be same as the type of the value stored at the memory location it points to  
// even the pointer variable would have its own address
// if a pointer is declared and not initialised, it'll point to some random address

// &ptr gives the address of the pointer variable itself and not the address stored in ptr

#include<iostream>
using namespace std;

int main()
{
    int a=5;
    cout<<&a; //gives the address of a

    // DECLARATION AND INITIALISATION SEPARATELY
    int* ptr1; //using this u can store address of a variable storing integer value/ int variable --> called pointer declaration

    ptr1=&a;

    float b=9.2;

     // DECLARATION AND INITIALISATION TOGETHER
    float *ptr2=&b; //using this u can store address of a variable storing float value/ float variable

    cout<<endl<<ptr1<<" "<<ptr2<<endl;

    cout<<&ptr1; // address of ptr1 itself
}