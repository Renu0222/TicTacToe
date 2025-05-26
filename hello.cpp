#include<iostream>
using namespace std;
int main()
{
   int a, b;
   
   cout<<"a : ";
   cin>>a;
   cout<<"b : ";
   cin>>b;

   int c = a + b ;
   cout << "add = "<< c <<endl;
   cout << "add = "<< (a+b) <<endl;
   cout << "sub = "<< (a-b) <<endl;
   cout << "mul = "<< (a*b) <<endl;
   cout << "div = "<< (a/ (float) b) <<endl;
   cout << "mod = "<< (a%b) <<endl;
    return 0;
}