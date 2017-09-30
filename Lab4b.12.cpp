
#include <iostream>
using namespace std;

int LCM(int a, int b)
{static int temp=0;
temp+=b;
{if(temp%a==0 && temp%b==0 )
return temp;
else
 return LCM(a,b);}
}
 
int main()
{ int a,b,lcm;
cout<<"Enter two numbers whose LCM is to be found.";
cin>>a>>b;
if(a > b)
        lcm =LCM(b, a);
    else
        lcm = LCM(a,b);
cout<<"\nThe LCM of "<<a<<" & "<<b<< " is "<<lcm;
	return 0;
}
