#include <iostream>
#include<math.h>
using namespace std;



void sq_cube(int n,int p)
{
    cout<<"Result="<<pow(n,p);
}
int main()
{
        int n,p;
        cout<<"Enter a Number";
        cin>>n;
        cout<<"Enter 2 to calculate square and 3 to calculate cube:";
        cin>>p;
        sq_cube(n,p);
        return 0;
}
