/*
1. South Indian
    1. Idli
        1. masala idli(10)
        2. rava idli(20)
        3. fried idli(30)
    2. Dosa
        1. plain dosa(10)
        2. masala(20)
        3. maisur(10)
    3. Vada
        1. plain (10)
        2. masala(10)
        3. maindu vada(20)

2. Gujarati
3. Panjabi
4. chineese
5. Fast Food

*/
#include<iostream>
using namespace std;

int main()
{
    int choice,southChoice,idliChoice,total,plates;
    cout<<"1.South Indian"<<endl;
    cout<<"2.Gujarati"<<endl;
    cout<<"3.Panjabi"<<endl;
    cout<<"4.chineese"<<endl;
    cout<<"5.Fast Food"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"You selected south indian...."<<endl;
            cout<<"1.Idli"<<endl;
            cout<<"2.Dosa"<<endl;
            cout<<"3.vada"<<endl;
            cout<<"Enter your choice: "<<endl;
            cin>>southChoice;
            switch (southChoice)
            {
            case 1:
                cout<<"You selectd Idli in south indian...."<<endl;
                cout<<"1.Plain Idli(10)"<<endl;
                cout<<"2.Masala Idli(20)"<<endl;
                cout<<"3.Fried Idli(30)"<<endl;
                cout<<"Enter your choice: "<<endl;
                cin>>idliChoice;
                switch(idliChoice)
                {
                    case 1:
                        cout<<"You selected plain idli in idli..."<<endl;
                        cout<<"How many plates do you want? "<<endl;
                        cin>>plates;
                        cout<<"your total bill is: "<<plates*10<<endl;
                        break;
                    case 2:
                        cout<<"You selected Masala idli in idli..."<<endl;
                        cout<<"How many plates do you want? "<<endl;
                        cin>>plates;
                        cout<<"your total bill is: "<<plates*20<<endl;
                        break;
                    case 3:
                        cout<<"You selected Fried idli in idli..."<<endl;
                        cout<<"How many plates do you want? "<<endl;
                        cin>>plates;
                        cout<<"your total bill is: "<<plates*30<<endl;
                        break;
                    default:
                        cout<<"Invalid choice!!!!"<<endl;
                        break;
                }
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                cout<<"Invalid choice!!!!"<<endl;
                break;
            }

            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            cout<<"Invalid choice!!!!"<<endl;

    }
    

    return 0;
}