#include <iostream>
using namespace std;

int print_odd(int num,int i)
{
 if(i<=num)
{
cout<<i<<" ";
print_odd(num,i+2);
}
return 0;
}

int print_even(int num,int j)
{
 if(j<=num)
{
cout<<j<<" ";
print_even(num,j+2);
}
return 0;
}

int main() {
int num,i=1,j=2;
cout<<"Enter any number.";
cin>>num;
cout<<"\nOdd numbers between 1 to "<<num<<" are ";
print_odd(num,i);
cout<<"\nEven numbers between 1 to "<<num<<" are ";
print_even(num,j);

	return 0;
}
