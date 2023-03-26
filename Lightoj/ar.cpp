#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,temp;
    cin>>n;
    int ar1[n];
    int ar2[n];

   cout<<"Enter 1st Array: ";
   for(i=0;i<n;i++)
   {
       cin>>ar1[i];
   }

   cout<<"Enter 2nd Array: ";
   for(i=0;i<n;i++)
   {
       cin>>ar2[i];
   }

   //sort the array1
   for(i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(ar1[i]<ar1[j])
           {
              temp=ar1[i];
              ar1[i]=ar1[j];
              ar1[j]=temp;
           }

       }
   }

   //sort the array 2
    for(i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(ar2[i]<ar2[j])
           {
              temp=ar2[i];
              ar2[i]=ar2[j];
              ar2[j]=temp;
           }

       }
   }


    //print sorted ar1
   for(int i=0;i<n;i++)
   {
       cout<<ar1[i]<<" ";
   }
   cout<<endl;

    //print sorted ar2
    for(int i=0;i<n;i++)
   {
       cout<<ar2[i]<<" ";
   }
   cout<<endl;

   //marge two array
   for(int i=0;i<n;i++)
    {
        if(ar1[i]>ar2[i])
           cout<<ar1[i]<<" "<<ar2[i]<<"   ";

        else
            cout<<ar2[i]<<" "<<ar1[i]<<"   ";
    }
}
