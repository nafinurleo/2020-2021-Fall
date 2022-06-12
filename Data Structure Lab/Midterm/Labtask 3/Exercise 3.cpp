#include<iostream>
using namespace std;

int main(){
    int a[10];
    int b[10];

    cout<<"Input : A[] : ";
        for(int i=0;i<10;i++){
                cin>>a[i];
                }
    cout<<"Output : B[] : ";
    for(int j=10;j<=10;j++){
        for(int i=9;i>=0;i--){
           b[j]=a[i]*3;
           cout<<b[j]<<" "; }
   }
  return 0;
}
