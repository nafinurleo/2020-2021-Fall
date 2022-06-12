#include<iostream>
using namespace std;
int main(){

    float AllMarks[5]={94,87,82,85,90};
    float cgpa[5];
    for(int i=0;i<5;i++){

        float temp=AllMarks[i];

        if (temp>=90)
        {
            cgpa[i]=3*4.0;
        }

        else if(temp>=85&& temp<90)
        {
            cgpa[i]=3*3.75;

        }

         else if(temp>=80&& temp<85)
        {
            cgpa[i]=3*3.5;

        }

         else if(temp>=75&& temp<80)
        {
            cgpa[i]=3*3.25;

        }

         else if(temp>=70&& temp<75)
        {
            cgpa[i]=3*3;

        }

          else if(temp>=50&& temp<70)
        {
            cgpa[i]=3*2.75;

        }

          else if(temp<50)
        {
            cgpa[i]=3*0;

        }
    }

    float Cgpa;
    float sum=0;
    for (int i=0;i<5;i++)
    {
        sum=sum+cgpa[i];

    }

    cout<<"Cgpa is : "<<sum/15;

}

