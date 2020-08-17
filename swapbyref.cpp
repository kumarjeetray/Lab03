#include <iostream>
#include<stdlib.h>
using namespace std;



void swap(int &n1,int &n2)
{
    int t=n1;
    n1=n2;
    n2=t;
}
int main()
{
        int n1,n2;
        cout<<"Enter two Numbers: ";
        cin>>n1>>n2;
        cout<<"Before Swaping Num1="<<n1<<" and Num2="<<n2<<endl;
        swap(n1,n2);
        cout<<"After Swaping Num1="<<n1<<" and Num2="<<n2;
        return 0;
}
