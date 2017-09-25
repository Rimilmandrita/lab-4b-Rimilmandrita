#include <iostream>
using namespace std;

long int fact(int num,long int prod)
{
while (num>0){
prod=prod*num;
num--;
fact(num,prod);
}
return prod;
}

int main() 
{
int num;
long int prod=1;
cout<<"Enter any number.";
cin>>num;
cout<<"\nThe number entered is "<<num;
prod=fact(num,prod);
cout<<"\nThe factorial of number is "<<prod;
	return 0;
}
