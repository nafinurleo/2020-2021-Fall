#include <iostream>
using namespace std;

int main(){

    int arr1[5] = {10,20,30,40,50};
    int size1=5;
    int arr2[8] = {1,2,3,4,5,6,7,8};
    int size2=8;
    int k;
    int Msize=size1+size2;
    int merge[Msize];
    for(int i=0;i<size1;i++){
        merge[i]=arr1[i];
    }
    for(int i=0;i<size2;i++){
        merge[i+5]=arr2[i];
    }
    for(int i=Msize-1;i>=0;i--){
        cout<< merge[i]<<"";
    }

    return 0;

}
