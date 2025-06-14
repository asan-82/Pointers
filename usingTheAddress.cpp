// * is called dereferencing operator, it is used to access the value at the memory location which the pointer is poining to
// *ptr means go to the location where the value is stored

#include<iostream>
using namespace std;

int main()
{
   int a=5;
   int* ptr=&a;

   cout<<*ptr<<endl; //5

   a=19;
   cout<<*ptr<<endl; //19

   // Updation using pointer variable

   *ptr=60;
   cout<<*ptr<<endl;

   //storing the value using *ptr

   int s=*ptr;
   cout<<s;
}