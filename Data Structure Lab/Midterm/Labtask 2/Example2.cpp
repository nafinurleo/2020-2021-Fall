#include<iostream>
using namespace std;

int main(){
    int arr1[6]={1,4,6,3,6,9};
    int size=6;
    int arr2[6]={5,3,7,1,2,6};
    int k,i,x;
    k=0;
    x=0;
    int Msize=12;
    int arr3[Msize];
    for(int i=0;i<size;i++){
        int chk=arr1[i];
        for(int j=0;j<6;j++){
            if(arr2[j]==chk){
                arr3[x++]=chk;
            }
        }
    }
    if(x!=0){
    for(i=0;i<x;i++){
        cout<<arr3[i];
    }
    }
    else{
        cout<<"No common element!"<<endl;
    }


}
