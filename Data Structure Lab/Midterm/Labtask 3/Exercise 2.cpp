#include <iostream>
using namespace std;

void encode(string s, int x){

    for(int i=0; i<s.length();i=i+x){
        if(i==0){
            continue;
        }
        s[i]=s[i]+2;
        i++;
    }
    cout<<s;
    }

    int main(){
        encode("I am a student",2);

   return 0;
}
