#include <iostream>

using namespace std;

int main(){

    int n,i;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    cout<<"Input Array Element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unsorted Elements: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        int cmp=0;
        int ex=0;
        for(i=0; i<n; i++){
        for(int j=0;j<n-i-1;j++){
            cmp++;
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                ex++;
            }
        }
    }
    cout<<endl;
    cout<<"Sorted Elements: ";
     for(i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    cout<<endl;
    cout<<"Number of comparisons="<<cmp;
    cout<<endl;
    cout<<"Number of exchanges="<<ex;
    return 0;
}

