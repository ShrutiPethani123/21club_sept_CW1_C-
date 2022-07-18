#include<iostream>
using namespace std;

int main()
{
    int unit;
    float bill;
    cout<<"Enter units:"<<endl;
    cin>>unit;

    if(unit<=50)
    {
        bill = unit*0.50;
    }else if(unit<=150)
    {
        bill = 25+(unit-50)*0.75;
    }else if(unit<=250)
    {
        bill = (50*0.50)+(100*0.75)+(unit-150)*1.20; // 100 +
    }else{
        bill = (50*0.50)+(100*0.75)+(100*1.20)+(unit-250)*1.50; // 120+
    }
    cout<<"Total bill = "<<bill<<endl;

    return 0;
}