#include<iostream>
using namespace std ;

int main(){

    int arr1[10]={8,4,6,1,6,9,6,1,9,8};
    int counts[10]={} ;
    int temp = 0;
    int m = sizeof(arr1)/sizeof(arr1[0]);
    for (int i = 0; i<10;i++){
        temp = arr1[i];
        counts[temp]++;

    }
    for(int i = 0; i<m;i++){
        if(counts[i]>0 && counts[i]==1 ){
            cout<<i<<" occurs = "<< counts[i]<<" time "<<endl ;
        }
        else if (counts[i]>=2){
            cout<<i<<" occurs = "<< counts[i]<<" times "<<endl ; ;
        }
    }
    return 0;
}
