#include <iostream>
using namespace std;

int main(){

    int a, Hindi, English, Gujarati;

    cout  << "\nHindi me baat krne keliye 1 dabaiiye" << endl;
    cout  << "Press 2 to communicate in English" << endl;
    cout  << "Gujarati ma vaat krva mate 3 dabavo jo" << endl << endl;

    cout << "In which language would you like to communicate?  --> ";
    cin >> a;

    switch (a){
        case 1 :
            cout  << "\nCustomer Support ke liye 1 dabaiiye" << endl;
            cout  << "Banking Service ke liye 2 dabaiiye" << endl;
            cout  << "Healthcare Service ke liye 3 dabaiiye" << endl;
            cout  << "Telecom Service ke liye 4 dabaiiye" << endl << endl;

            cout << "Aapko konsi seva pasand karenge?  --> ";
            cin >> Hindi;

            switch (Hindi){
                case 1 :
                    cout << "Aapko kya aapatti h?";
                    break;

                case 2 :
                    cout << "Kya aapko apna Bank balance jaan na h?";
                    break;

                case 3 :
                    cout << "Kya aapko health insurance k bare me jaan na h?";
                    break;

                case 4 :
                    cout << "Kya aapko recharge karvana h?";
                    break;

                default :
                    cout << "Aap ne ek bhi seva nahi li" << endl;
                    break;
            }
            break;

        case 2 :
            cout  << "\nPress 1 for Customer Support" << endl;
            cout  << "Press 2 for Banking Service" << endl;
            cout  << "Press 3 for Healthcare Service" << endl;
            cout  << "Press 4 for Telecom Service" << endl << endl;

            cout << "Which Service would you like to take?  --> ";
            cin >> English;

            switch (English){
                case 1 :
                    cout << "What Objections do you have?";
                    break;

                case 2 :
                    cout << "Do you want to check your Bank Balance?";
                    break;

                case 3 :
                    cout << "Do you want to know about Health Insurance?";
                    break;

                case 4 :
                    cout << "Do you want to get a recharge done?";
                    break;

                default :
                    cout << "You have not availed even a single service" << endl;
                    break;
            }
            break;

        case 3 :
            cout  << "\nCustomer Support maate 1 dabavo" << endl;
            cout  << "Banking Service maate 2 dabavo" << endl;
            cout  << "Healthcare Service maate 3 dabavo" << endl;
            cout  << "Telecom Service maate 4 dabavo" << endl << endl;

            cout << "Tame kai seva prapt krva maangso?  --> ";
            cin >> Gujarati;

            switch (Gujarati){
                case 1 :
                    cout << "Tamne su vaandho aave che?";
                    break;

                case 2 :
                    cout << "Su tamare tamaru Bank Balance jaan vu che?";
                    break;

                case 3 :
                    cout << "Su tamare Health Insurance vishe jaan vu che?";
                    break;

                case 4 :
                    cout << "Su tamare Recharge karav vu che?";
                    break;

                default :
                    cout << "Tame ek pan seva nthi lidhi" << endl;
                    break;
            }
            break;

        default :
            cout << "You have not availed even a single service" << endl;
            break;
    }
}