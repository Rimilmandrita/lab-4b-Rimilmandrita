#include <iostream>
using namespace std;

int sum_odd(int i,int num)
{ 
  int sm=0;
  if(i<=num)
  {sm+=i;
  return (sm+sum_odd(i+=2,num));
}
  if(i>num)
  return sm;
}   
int sum_even(int j,int num)
{ 
  int sm=0;
  if(j<=num)
  {sm+=j;
  return (sm+sum_odd(j+=2,num));
}
  if(j>num)
  return sm;
}   

int main()
{
  int num,i=1,j=2;
  cout<<"\n Enter the upper limit ";
  cin>>num;
  int sum1=sum_odd(i,num);
  cout<<"\n The sum of all odd numbers between 1 to "<<num<<" is "<<sum1;
  int sum2=sum_even(j,num);
  cout<<"\n The sum of all even numbers between 1 to "<<num<<" is "<<sum2;
  return 0;
}
