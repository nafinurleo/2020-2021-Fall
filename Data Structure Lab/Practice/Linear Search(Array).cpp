#include <iostream>
using namespace std;

int main(){

    int arr[10] = {2,4,6,7,9,11,14,15,17,20};
    cout<< "Enter the value should be searched: " <<endl;
    int n;
    cin>> n;

    bool flag = false;
    for(int i=0; i<10;i++){
        if(n == arr[i]){
            flag = true;
            break;
        }
    }
    if(flag == true){
        cout<< "The value found.";
    }
    else{
        cout<< "The value not found.";
    }

}
