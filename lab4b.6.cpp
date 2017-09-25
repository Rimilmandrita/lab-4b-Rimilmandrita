
#include <iostream>
using namespace std;

int rev(int num){
int dig;
if(num>0){
dig=num%10;
cout<<dig;
rev(num/10);
}
return 0;
}

int main() {
int num;
cout<<"Enter any number.";
cin>>num;
cout<<"\nThe reversed number is - ";
rev(num);
	return 0;
}
