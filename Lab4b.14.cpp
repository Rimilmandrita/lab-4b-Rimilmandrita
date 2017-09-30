
#include <iostream>
using namespace std;

int array(int a[],int n, int i,int sum)
{ if(i<n)
 { sum =sum+a[i];
  array(a,n,i+1,sum);
 }
 else if(i==n)
 return sum;
}

int main()
{ int arr[100];
int n,sum=0;
cout<<"Enter the number of elements of an array(max 100 elements):";
cin>>n;
cout<<"\nEnter the elements of an array:";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
sum=array(arr,n,0,0);
cout<<"\nThe sum of elements of the array is : ";
cout<<sum;

	return 0;
}
