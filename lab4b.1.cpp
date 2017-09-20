#include <iostream>
using namespace std;

int cal_pow(int base,int expo)
{
if (expo>=1)
{ 
	return (base*cal_pow(base,expo-1));
}else
  return 1;
}

int main() {
int base,expo,res=1;
cout<<"Enter the base.";
cin>>base;
cout<<"\nEnter the power.\n";
cin>>expo;
res= cal_pow(base, expo);
cout<<base<<"^"<<expo<< "="<<res;
	return 0;
}
