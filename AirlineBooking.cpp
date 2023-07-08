//
// Created by Keerthan Kumar on 08-07-2023.
//

#include "AirlineBooking.h"
float registration::charges;
int registration::choice;
class ticket : public registration,details{
public:
    void bill(){
        string destination="";
        ofstream outf("records.txt");
        {
            outf<<"Customer ID:"<<details::cid<<"\n";
            outf<<"Customer Name:"<<details::name<<"\n";
            outf<<"Customer Gender:"<<details::gender<<"\n";
            cout<<"\n";
            if(registration::choice==1){
                destination="CHENNAI";
            }
            else if(registration::choice==2){
                destination="DELHI";
            }
            else if(registration::choice==3){
                destination="MUMBAI";
            }
            else if(registration::choice==4){
                destination="KOLKATA";
            }
            else if(registration::choice==5){
                destination="HYDERABAD";
            }
            outf<<"Destination:"<<destination<<"\n";
            outf<<"flight price"<<registration::charges<<"\n";



        }
        outf.close();
    }
    void display(){
        ifstream ifs("records.txt");{
            if(!ifs){
                cout<<"file error"<<"\n";
            }
            while(!ifs.eof()){
                ifs.getline(arr,100);
                cout<<arr<<"\n";
            }

        }ifs.close();
    }
};

void mainmenu(){
    int lchoice;
    int schoice;
    int back;
    cout<<"\n";
    cout<<"\t                Banglore Airlines               \n"<<'\n';
    cout<<"\t____________________Main Menu___________________"<<"\n";

    cout<<"\t________________________________________________"<<'\n';

    cout<<"\t|\t\t\t\t\t\t|"<<"\n";
    cout<<"\t|\t Press 1 To Add customer details   \t|"<<"\n";
    cout<<"\t|\t Press 2 for flight registration   \t|"<<"\n";
    cout<<"\t|\t Press 3 for ticket and charges    \t|"<<"\n";
    cout<<"\t|\t Press 4 for exit                  \t|"<<"\n";
    cout<<"\t|\t\t\t\t\t\t|";
    cout<<"\t________________________________________________"<<'\n';

    cout<<"Enter your choice: ";
    cin>>lchoice;
    details d;
    registration r;
    ticket t;

    switch (lchoice){
        case 1:{
            cout<<"__________Customers___________"<<"\n";
            d.information();
            cout<<"press 1 to go back to main menu";
            cin>>back;
            if(back==1){
                mainmenu();
            }else {
                mainmenu();
            }break;

        }
        case 2:{
            cout<<"_______Book a flight using this system_______"<<"\n";
            r.flights();
            break;
        }
        case 3:{
            cout<<"______Get your ticket______\n"<<"\n";
            t.bill();
            cout<<"your ticket is ready please collect it\n"<<"\n";
            cout<<"press 1 to display your ticket";
            cin>>back;
            if(back==1){
                t.display();
                cout<<"press any key to go back to main menu";
                cin>>back;
                if(back==1){
                    mainmenu();

                }else {
                    mainmenu();
                }

            }else {
                mainmenu();
                break;
            }
        }
        case 4:{
            cout<<"____Thank You for choosing banglore airlines____"<<"\n";
            break;
        }
        default :{
            cout<<"invalid input please try again\n"<<"\n";
            mainmenu();
            break;
        }
    }


}
