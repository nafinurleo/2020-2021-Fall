#include<iostream>
using namespace std;

int main(){
    int arr1[7]={1,4,6,3,6,9,1};
    int size=7;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           if(arr1[i]==arr1[j]){
            if(j==size-1){
               size--;
            }
            else{
                for(int k=j;k<size-1;k++){
                  arr1[k]=arr1[k+1];
             }
         }

     }

   }
 }
    if(size==7){
        cout<<"Array already unique!"<<endl;
    }
    else{
        for(int i=0;i<size;i++){
            cout<<arr1[i]<<endl;
        }
    }
    return 0;

}
