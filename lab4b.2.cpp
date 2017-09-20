#include <iostream>
using namespace std;

int print(int num,int i)
{
 if(i<=num)
{
cout<<i<<" ";
print(num,i+1);
}
return 0;
}

int main() {
int num,i=1;
cout<<"Enter any number.";
cin>>num;
print(num,i);

	return 0;
}
