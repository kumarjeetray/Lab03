#include <iostream>
using namespace std;
void inc(int n)
{
    n++;
    cout<<"After Increment-"<<n;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Before increment: "<<n<<endl;
    inc(n);
    return 0;
}


