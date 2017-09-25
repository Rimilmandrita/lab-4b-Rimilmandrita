
#include <iostream>
using namespace std;

int reverse(int num,int rev){
while (num>0){
int dig=num%10;
rev=rev*10+dig;
num=num/10;
reverse(num,rev);
}
return rev;
}

int main() {
int num,rev=0,rnum;
cout<<"Enter any number.";
cin>>num;
int n=num;
cout<<"\nThe number entered is "<<num;
rnum=reverse(num,rev);
if(rnum==n)
{cout<<"\nThe number is a palindrome.";}
else
cout<<"\nThe number is not a palindrome.";
	return 0;
}
