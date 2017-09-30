
#include <iostream>
using namespace std;

int HCF(int a, int b)
{ 
if(b!=0)
 return HCF(b, a%b);
else 
 return a;
 }
 
int main()
{ int a,b;
cout<<"Enter any two numbers whose HCF is to be found.";
cin>>a>>b;
cout<< "\nHCF of "<<a<<" & "<<b<<" is "<<HCF(a,b);

        return 0;
}
