/*

Aritmetic --> + - * / %
relational ---> < > <= >= == !=
logiacal ---> && || !
Bitwise ----> & | ^ << >>
assignment ----> += -= = *= /= &= |= ^=(shorthand notation)
                a=a+2 ---> a+=2
inc/dec  ----> ++ --
false- 0
true -1

&&

A   B   A&&B

F   F   F
F   T   F
T   F   F
T   T   T

||

A   B   A||B

F   F   F
F   T   T
T   F   T
T   T   T

^(XOR)

A   B   A&&B

F   F   F
F   T   T
T   F   T
T   T   F

*/

#include<iostream>
using namespace std;

int main()
{
    // int a=5; //0000 0101
    // int b=3; //0000 0011
    // int c=6;// 0000 0110
    // // cout<<(a<<3); //0000 1010--> 10 //0001 0100 -->20 //0010 1000-->40
    // cout<<(c>>30);//0000 0011 -->3// 0000 0001-->1 //0000 0000 --> 0

    int a=5,b=4;
    // cout<<a++<<endl;//5
    // cout<<a<<endl;//6
    // cout<<++a<<endl;//7
    // cout<<a<<endl;//7

    // int c= a++ + ++a + a++;//5(6) + 7(7) + 7(8)= 19
    // int d = a++ + a++ + ++a + a++ + a++;//5(6)+ 6(7)+8(8)+8(9)+9(10)
    // int d= a++ + a++ + ++a + ++a + --a;//5(6)+ 6(7)+8(8)+9(9)+8(8)

    

    // int d = a++ + b++ + ++a + ++b + b++ + a++;//5(a-6)+4(b-5)+7(a-7)+6(b-6)+6(b-7)+7(8)
    int d = a++ + a++ + b-- + ++a + b-- + a++ + a--;
    cout<<d<<endl;
    cout<<a<<endl;
    return 0;
}