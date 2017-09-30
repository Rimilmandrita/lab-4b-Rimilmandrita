
#include <iostream>
using namespace std;

int array(int a[],int n, int i)
{ if(i<n)
 {cout<<a[i]<<" ";
 array( a, n,i+1);
}
 return 0;
}

int main()
{ int arr[100];
int n;
cout<<"Enter the number of elements of an array(max 100 elements):";
cin>>n;
cout<<"\nEnter the elements of an array:";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"\nThe elements of the array are : ";
array(arr,n,0);
return 0;
}
