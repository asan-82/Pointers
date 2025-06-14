#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int result;
    int* p1=&x;
    int* p2=&y;

    int* resPtr=&result;

    *resPtr=*p1 + *p2;
    cout<<result<<" "<<*resPtr;
  
}