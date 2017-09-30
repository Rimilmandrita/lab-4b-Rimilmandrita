
#include <iostream>
using namespace std;

int array_big(int a[],int n, int i,int big)
{ if(i<n)
 {
 { if(big<a[i])
   big=a[i];
   else
   big=big;
 }
  array_big(a,n,i+1,big);}
  else if(i==n)
 return big;
}

int array_small(int a[],int n, int i,int small)
{ if(i<n)
 {
 { if(small>a[i])
   small=a[i];
   else
   small=small;
 }
  array_small(a,n,i+1,small);}
  else if(i==n)
 return small;
}
int main()
{ int arr[100];
int n,big=0,small=0;
cout<<"Enter the number of elements of an array(max 100 elements):";
cin>>n;
cout<<"\nEnter the elements of an array:";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
small=arr[0];
big=array_big(arr,n,0,0);
cout<<"\nThe biggest element of the array is : ";
cout<<big;
small=array_small(arr,n,0,small);
cout<<"\nThe smallest element of the array is : ";
cout<<small;
	return 0;
}
