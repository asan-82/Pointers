#include<iostream>
using namespace std;

int main()
{
    int x=10;

    int* ptr;

    //MISTAKE 1

    ptr=5; // wrong as ptr can only store addresses
   
    //MISTAKE 2

    *ptr=&x; // wrong as *ptr cannot store the addresses, only values corresponding to those addresses
  
}