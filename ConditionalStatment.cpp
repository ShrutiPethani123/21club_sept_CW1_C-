/*

1. simple if
2. else if
3. else if ladder
4. nested if

*/
//



#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter no:"<<endl;
    cin>>a;

    if(a>0)
    {
        if(a>10)
        {
            cout<<a<<" is greater than 10"<<endl;
        }
        else{
            cout<<a<<" is less than 10"<<endl;
        }
    }
    else if(a==0){

        cout<<a <<" is ZERO"<<endl;

    }else{

        cout<<a<<" is Negative"<<endl;
    }


    return 0;
}
/*

In all task input taken by user

1. Find maximum number between two numbers
2. Find maximum number between three numbers
3. check number is even or odd?
4. check alphabet is vowel or consonant ? (capital)
5. check character is alphabet , number or special character ?
6. Enter cost price and selling price from user and check profit or loss ? 
7. Take input from user in numbers and print weekdays.(1- monday , 2- tuesday ..... 7- sunday)
8. write a program to no is divisible by 3 and 11 or not ?
9. Take input from user in numbers in month and print no of days that month. (1 - 31 days , 2....)
10. Write  a program to input percentage from user and calculate:
	If percentage >= 90% : Grade A
	If percentage >= 80% : Grade B
	If percentage >= 70% : Grade C
	If percentage >= 60% : Grade D
	If percentage >= 40% : Grade E
	If percentage < 40% : Grade F
11. count total no of notes in given amount - 1552
	500 - 3(52)
	200
	100
	50 - 1(2)
	10
	5
	1 - 2(0)

12. Write a program to take input from user in seconds and convert into hours and minutes.

	10000 - 2 :46 : 40

	
13. Write a program to input electricity unit charge and calculate the total 
	electricity bill according to the given condition:

	For first 50 units Rs. 0.50/unit
	For next 100 units Rs. 0.75/unit
	For next 100 units Rs. 1.20/unit
	For unit above 250 Rs. 1.50/unit

	300 
	50 - 0.50 = 25
	100 - 0.75=75
	100 - 1.20 = 120
	50 - 1.50  = 75   total - 295


*/