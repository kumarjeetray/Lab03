

#include <iostream>

using namespace std;

void area(int r)
{
        cout<<"Area of circle= "<<3.142*r*r<<endl;
}
void area(int l,int b)
{
    cout<<"Area of rectangle= "<<l*b<<endl; 
}
float area(float base,float h)
{
    return 0.5*base*h;
}
int main() {
	int r,l,b;
	float h,base;
	cout<<"Enter the radius of circle:";
	cin>>r;
	area(r);
	cout<<"Enter the length and breadth of the rectangle: ";
	cin>>l>>b;
	area(l,b);
	cout<<"Enter the base and height of the triangle: ";
	cin>>base>>h;
	float art=area(base,h);
	cout<<"Area of tringle= "<<art;
	return 0;
}
