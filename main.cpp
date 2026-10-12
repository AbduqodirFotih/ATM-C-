#include <iostream>
#include <conio.h>
using namespace std;
int main() {

    /// project

    double money = 500 , newMoney;
    string password = "0000" ;
    string newPassword ;
    string newPassword1 ;
    string newPassword2 ;
    string phoneNumber ;
    int choice;

    int counter = 0;
    while (true)
    {
        cout <<"Enter the password : "; cin >> newPassword;
        if (newPassword == password)
        {
            while (true)
            {
                system("CLS");
                cout << "1. Withdraw funds \n";
                cout << "2. Check funds \n";
                cout << "3. Change password \n";
                cout << "4. View password \n";
                cout << "5. Link to SMS \n";
                cout << "6. Finish \n";
                cout << "Enter :"; cin >> choice;

                switch (choice)
                {
                    case 1:
                        cout <<"How much do you want to withdraw? :"; cin >> newMoney;
                        if(money >= newMoney && newMoney > 0 )
                        {
                            money = money - newMoney;
                            cout << "Money has been withdrawn\n";
                        }
                        else
                        {
                            cout << "Error in withdrawing money\n";
                        }
                    break;
                    case 2:
                        cout << "Your funds : " << money << endl;
                    break;
                    case 3:
                        cout << "Enter the password        :"; cin >> newPassword;
                        cout << "Enter the new password    :"; cin >> newPassword1;
                        cout << "Re-enter the new password :"; cin >> newPassword2;
                        if( password == newPassword && newPassword1 == newPassword2)
                        {
                            password = newPassword1;
                            cout << "The password has been changed. \n";
                        }
                        else
                        {
                            cout << "Error in changing the password\n";
                        }

                    break;
                    case 4:
                        cout << "Your password : " << password << endl;
                    break;
                    case 5:
                        cout << "Enter your phone number :"; cin >> phoneNumber;
                        cout << "SMS notification linked \n";
                    break;
                    case 6:
                        cout << "Operation completed. THANK YOU\n";
                        return 0;

                }
                getch();
            }
        }
        else
        {
            ++counter;
            if( counter == 3 )
            {
                cout << "The card is locked. \n";
                return 0;
            }
            cout << "You entered the password incorrectly. \n";
        }
    }

    return 0;
}
