#include <iostream>
using namespace std;

int main(){

    int arr[10] = {20,30,50,60,70};
    int size_ = 5;

    //insertion at the end
    arr[size_ ++] = 80;
    arr[size_++] = 90;
    arr[size_++] = 100;

    //current array{0->20,1->30,2->50,3->60,4->70,5->80,6->90,7->100}
    //current size
    //insertion at beginning

    for(int i=size_;i>0;i--){
        arr[i] = arr[i-1];
    }

    //current array(1->20,2->30,3->50,4->60,5-.70,6->80,7->90,8->100)

    arr[0] = 10; size_++;

    //current array(0->10,1->20,2->30,3->50,4->60,5-.70,6->80,7->90,8->100)
    //insertion at middle

    int index = 3;
    for(int i=size_;i>index;i--){
        arr[i] = arr[i-1];
    }
    arr[index] = 40; size_++;
    for(int i=0;i<size_;i++){
        cout<< arr[i] <<" ";
    }

}
