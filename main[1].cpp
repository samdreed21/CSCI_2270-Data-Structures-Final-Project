#include <iostream>
#include <fstream>
#include <sstream>
#include "Store.h"

//Samuel Reed, Final project
//For this project I made my program gather the number of times 3 different companies had donated to boulder food rescue
//over the entire time period the data spanned. To do this I look on orgData.csv and found out the ID's of three companies.
//After that I had my program look through donationData.csv to find how many times the ID of the company showed up.
//The class in this program is the Store class, and the three objects created are wholefoods, luckysmarket, and alfalfas.
using namespace std;

int main()
{

    Store wholefoods(0);
    Store luckysmarket(0);
    Store alfalfas(0);
    int choice;
    cout<<"This Program lets you track the total number of times a certain store/business/restaurant has donated to Boulder Food Rescue. Please select which the store you want data about"<<endl;
    cout<<"1. Whole Foods Alpine Ideal Market"<<endl;
    cout<<"2. Lucky's Market"<<endl;
    cout<<"3. Alfalfa's"<<endl;
    cout<<"4. Quit"<<endl;
    cin>>choice;
    string choice2;
    while (choice!=4 or choice2=="yes"){
            if (choice==1){
                cout<<"Whole Foods Alpine Ideal Market has donated to Boulder Food Rescue the following number of times: "<<endl;
                        wholefoods.getData();
                        wholefoods.printwholefoods();
                        }
            if (choice==2){
                cout<<"Lucky's Market has donated to Boulder Food Rescue the following number of times: "<<endl;
                        luckysmarket.getData();
                        luckysmarket.printluckysmarket();
                        }
            if (choice==3){
                cout<<"Alfalfa's has donated to Boulder Food Rescue the following number of times: "<<endl;
                        alfalfas.getData();
                        alfalfas.printaltotal();
                        }

        cout<<"Would you like to view more data?"<<endl;
        cout<<"yes"<<endl;
        cout<<"no"<<endl;
        cin>>choice2;
        if (choice2=="no"){
            cout<<"The easiest portion of this project was just writing the main.cpp, as it was all stuff I had done before. The most difficult part of the project was definitely reading the data from the files and storing it correctly. This was also the most and least enjoyable part. While I was working on it and not able to figure it out it was extremely frustrating, but when I finally figured out how to work it was very satisfying. I also think that this content will have a lot of practical application in the real world, and that gave me a sense of purpose while working on it. "<<endl;
            break; }


        cout<<"This Program lets you track the total number of times a certain store/business/restaurant has donated to Boulder Food Rescue. Please select which the store you want data about"<<endl;
        cout<<"1. Whole Foods Alpine Ideal Market"<<endl;
        cout<<"2. Lucky's Market"<<endl;
        cout<<"3. Alfalfa's"<<endl;
        cout<<"4. Quit"<<endl;
        cin>>choice;
                        }
 if (choice==4){
            cout<<"The easiest portion of this project was just writing the main.cpp, as it was all stuff I had done before. The most difficult part of the project was definitely reading the data from the files and storing it correctly. This was also the most and least enjoyable part. While I was working on it and not able to figure it out it was extremely frustrating, but when I finally figured out how to work it was very satisfying. I also think that this content will have a lot of practical application in the real world, and that gave me a sense of purpose while working on it. "<<endl;
             }





return 0;
}
