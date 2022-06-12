#include <iostream>
using namespace std ;
int main ()
{
    int arr1[]={8,4,6,1,6,9,6,1,9,8};
    int n;
    int counts=0;
    cout <<"Input a number to search: ";
    cin>>n;
    int m= sizeof(arr1)/sizeof(arr1[0]);
    for(int i =0 ; i<=m-1;i++)
         if(arr1[i]==n)
            {
            counts ++ ;
            }
             cout<<"The number occurs "<< counts <<" times in the array"<<endl;

        return 0;
}
