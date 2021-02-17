#include<iostream>
using namespace std;
int main()
{
        int initA[100],finA[100],i,size;
        cout<<"Input the size of the array : ";
        cin>>size;
        cout<<"Input the elements of the first array";
        for(i=0;i<size;i++)
        {
               cin>>initA[i];
        }
        for(i=0;i<size;i++)
        {
             finA[i]=initA[i];
        }
        cout<<"The final array is: ";
        for(i=0;i<size;i++)
               cout<<finA[i]<<" ";
        return 0;
}
