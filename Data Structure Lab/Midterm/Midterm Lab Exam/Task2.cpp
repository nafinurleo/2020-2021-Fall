#include <iostream>

using namespace std;
struct student{
    string name;
    double Course1;
    double Course2;
    double Course3;
    double Course4;
    double Course5;
    double avg;

};

int main()
{
    int n;
    cout<<" Student Number:";
    cin>>n;
    struct student st[n];
    cout<<" Student Details:"<<endl;
    for(int i=0;i<n;i++){

        cout<<"for student "<<i+1<<":"<<endl;

        cout<<"Enter name: ";
        cin>>st[i].name;

        cout<<"Enter mark of 1st course: ";
        cin>>st[i].Course1;

        cout<<"Enter mark of 2nd course: ";
        cin>>st[i].Course2;

        cout<<"Enter mark of 3rd course: ";
        cin>>st[i].Course3;

        cout<<"Enter mark of 4th course: ";
        cin>>st[i].Course4;

        cout<<"Enter mark of 5th course: ";
        cin>>st[i].Course5;

        st[i].avg=(st[i].Course1+st[i].Course2+st[i].Course3+st[i].Course4+st[i].Course5)/5;

    }

    cout<<endl<<endl;

    for(int i=0;i<n;i++){
        cout<<st[i].name<<" Average mark is:"<<st[i].avg<<endl;
    }


    return 0;
}
