//
// Created by Keerthan Kumar
//

#ifndef AIRLINEBOOKING_AIRLINEBOOKING_H
#define AIRLINEBOOKING_AIRLINEBOOKING_H

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainmenu();

class management{
public:
    management(){
        mainmenu();
    }
};
class details{
public:
    static string name,gender;
    int age;
    static int cid;
    char arr[100];
    void information(){
        cout<<"\nEnter customer id:";
        cin>>cid;
        cout<<"\nEnter your name:";
        cin>>name;
        cout<<"\nEnter your age:";
        cin>>age;
        cout<<"\nEnter your gender:";
        cin>>gender;
        cout<<"\nyour details are saved\n"<<"\n";



    }
};
int details::cid;
string details::name;
string details::gender;

class registration{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;
    void flights(){
        string flightN[]={"chennai","delhi","mumbai","kolkata","hyderabad"
        };
        for(int a=0;a<5;a++){
            cout<<(a+1)<<".Flights to "<<flightN[a]<<"\n";
        }
        cout<<"enter the number from above for your destination:";
        cin>>choice;
        cout<<"\n";
        switch(choice){
            case 1:{
                cout<<"_______Welcome________\n"<<"\n";
                cout<<"Following are the flight details for chennai in next 3 days"<<"\n";
                cout<<"\t1. 08-7-2023 10:00 AM 1hr price: 2600 Rs "<<"\n";
                cout<<"\t2. 09-7-2023 6:00 AM 45min price: 3500 Rs "<<"\n";
                cout<<"\t3. 10-7-2023 11:00 AM 1hr 30min price: 2200 Rs "<<"\n";
                cout<<"select the flight you want to book:";
                cin>>choice1;
                if(choice1==1){
                    charges=2600;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"please collect the ticket in mainmenu"<<"\n";
                }
                else if(choice1==2){
                    charges=3500;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"please collect the ticket in mainmenu"<<"\n";
                }
                else if(choice1==3){
                    charges=2200;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"please collect the ticket in mainmenu"<<"\n";
                }else {
                    cout<<"invalid input,please try again"<<"\n";
                    flights();
                }

                cout<<"press any key to go back to main menu:"<<"\n";
                cin>>back;
                if(back==1){
                    mainmenu();
                }else {
                    mainmenu();
                }










            }
            case 2:{cout<<"_______Welcome________\n"<<"\n";
                cout<<"Following are the flight details for delhi in next 3 days"<<"\n";
                cout<<"\t1. 08-7-2023 8:00 AM 3hr price: 4600 Rs "<<"\n";
                cout<<"\t2. 09-7-2023 11:00 AM 2 hr 45min price: 5500 Rs "<<"\n";
                cout<<"\t3. 10-7-2023 1:00 PM 3hr 30min price: 4000 Rs "<<"\n";
                cout<<"select the flight you want to book:";
                cin>>choice1;
                if(choice1==1){
                    charges=4600;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"please collect the ticket in mainmenu"<<"\n";
                }
                else if(choice1==2){
                    charges=5500;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"please collect the ticket in mainmenu"<<"\n";
                }
                else if(choice1==3){
                    charges=4000;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"please collect the ticket in mainmenu"<<"\n";
                }else {
                    cout<<"invalid input,please try again"<<"\n";
                    flights();
                }
                cout<<"press any key to go back to main menu:"<<"\n";
                cin>>back;
                if(back==1){
                    mainmenu();
                }else {
                    mainmenu();
                }



            }
            case 3:{
                cout<<"_______Welcome________\n"<<"\n";
                cout<<"Following are the flight details for mumbai in next 3 days"<<"\n";
                cout<<"\t1. 08-7-2023 10:00 AM 1hr price: 4800 Rs "<<"\n";
                cout<<"\t2. 09-7-2023 6:00 AM 45min price: 5000 Rs "<<"\n";
                cout<<"\t3. 10-7-2023 11:00 AM 1hr 30min price: 3900 Rs "<<"\n";
                cout<<"select the flight you want to book:";
                cin>>choice1;
                if(choice1==1){
                    charges=4800;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"please collect the ticket in mainmenu"<<"\n";
                }
                else if(choice1==2){
                    charges=5000;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"please collect the ticket in mainmenu"<<"\n";
                }
                else if(choice1==3){
                    charges=3900;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"please collect the ticket in mainmenu"<<"\n";
                }else {
                    cout<<"invalid input,please try again"<<"\n";
                    flights();
                }
                cout<<"press any key to go back to main menu:"<<"\n";
                cin>>back;
                if(back==1){
                    mainmenu();
                }else {
                    mainmenu();
                }


            }
            case 4:{
                cout<<"_______Welcome________\n"<<"\n";
                cout<<"Following are the flight details for kolkata in next 3 days"<<"\n";
                cout<<"\t1. 08-7-2023 6:00 PM 1hr price: 3600 Rs "<<"\n";
                cout<<"\t2. 09-7-2023 9:00 PM 45min price: 4500 Rs "<<"\n";
                cout<<"\t3. 10-7-2023 11:00 AM 1hr 30min price: 3200 Rs "<<"\n";
                cout<<"select the flight you want to book:";
                cin>>choice1;
                if(choice1==1){
                    charges=3600;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"please collect the ticket in mainmenu"<<"\n";
                }
                else if(choice1==2){
                    charges=4500;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"please collect the ticket in mainmenu"<<"\n";
                }
                else if(choice1==3){
                    charges=3200;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"please collect the ticket in mainmenu"<<"\n";
                }else {cout<<"invalid input,please try again"<<"\n";
                    flights();                                            }
                cout<<"press any key to go back to main menu:"<<"\n";
                cin>>back;
                if(back==1){
                    mainmenu();
                }else {
                    mainmenu();
                }


            }
            case 5:{
                cout<<"_______Welcome________\n"<<"\n";
                cout<<"Following are the flight details for hyderabad in next 3 days"<<"\n";
                cout<<"\t1. 08-7-2023 11:00 AM 1hr price: 1600 Rs "<<"\n";
                cout<<"\t2. 09-7-2023 8:00 AM 45min price: 2500 Rs "<<"\n";
                cout<<"\t3. 10-7-2023 11:00 PM 1hr 30min price: 1200 Rs "<<"\n";
                cout<<"Select the flight you want to book:";
                cin>>choice1;
                if(choice1==1){
                    charges=1600;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"Please collect the ticket in main menu"<<"\n";
                }
                else if(choice1==2){
                    charges=2500;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"Please collect the ticket in main menu"<<"\n";
                }
                else if(choice1==3){
                    charges=1200;
                    cout<<"\nyou have sucessfully booked the flight"<<"\n";
                    cout<<"Please collect the ticket in main menu"<<"\n";
                }else {cout<<"invalid input,please try again"<<"\n";
                    flights();                                            }
                cout<<"Press any key to go back to main menu:"<<"\n";
                cin>>back;
                if(back==1){
                    mainmenu();
                }else {
                    mainmenu();
                }


            }
            default :{

                cout<<"invalid input will get back to main menu"<<"\n";
                mainmenu();
                break;

            }
        }

    }
};


#endif //AIRLINEBOOKING_AIRLINEBOOKING_H
