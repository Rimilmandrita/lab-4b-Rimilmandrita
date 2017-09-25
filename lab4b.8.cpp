
#include <iostream>
using namespace std;

int s_dig(int num,int sum){
while (num>0){
int dig=num%10;
sum=sum+dig;
num=num/10;
s_dig(num,sum);
}
return sum;
}

int main() {
int num,sum=0;
cout<<"Enter any number.";
cin>>num;
cout<<"\nThe number entered is "<<num;
sum=s_dig(num,sum);
cout<<"\nThe sum of digits is "<<sum;
	return 0;
}
