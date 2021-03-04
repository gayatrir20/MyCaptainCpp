#include <iostream>

using namespace std;

int main()
{
cout<< "Size of char is:" << sizeof(char) << endl;
cout<< "Size of int is:" << sizeof(int) << endl;
cout<< "Size of float is:" << sizeof(float) << endl;
cout<< "Size of double is:" << sizeof(double)<<endl;
float a,b,product;
cout << "Enter first number"<<endl;
cin>>a;
cout << "Enter second number"<<endl;
cin>>b;

product=a*b;

cout<<"Product is "<<product;
    return 0;
}
