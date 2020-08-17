#include <iostream>

using namespace std;

void print(char c,int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<c;
    }
}
void print(char c)
{
    for(int i=1;i<=80;i++)
    {
        cout<<c;
    }
}
void print()
{
    for(int i=1;i<=80;i++)
    {
        cout<<"*";
    }
}
int main()
{
    int n,t;
    char c;
    cout<<"Enter 1 if you want to enter both character and the number\n Enter 2 if you want to enter only character\n Enter 3 if u dont want to enter anything:";
    cin>>n;
    if(n==1)
    {
        cout<<"Enter the character:";
        cin>>c;
        cout<<"Enter the no of time sto be printed:";
        cin>>t;
        print(n,t);
    }
    else if(n==2)
    {
        cout<<"Enter the character:";
        cin>>c;
        print(c);
    }
    else
    {
        print();
    }
    return 0;
}
