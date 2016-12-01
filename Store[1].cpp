#include "Store.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "Store.h"
using namespace std;
Store::Store(int n)
{
    int numOfDonations=n;
}
Store::~Store()
{

}
int Store::getData(){
ifstream inFile;
inFile.open("donationDataFixed.csv");
if(inFile.good()){

string allData;
int Wholefoods=0;
int Luckysmarket=0;
int Alfalfas=0;
    while (getline(inFile,allData)){
        stringstream ss(allData);
        string types;
        int counter=0;

    while (getline(ss,types,',')){
        if (counter==0)
        {

            if(types=="1")
               Wholefoods=Wholefoods+1;
            if(types=="3")
                Luckysmarket=Luckysmarket+1;
            if (types=="4")
                Alfalfas=Alfalfas+1;
        }
        counter++;
        }
        }

Wholefoodstotal=Wholefoods;
Luckysmarkettotal=Luckysmarket;
Alfalfastotal=Alfalfas;
}
}
void Store::printwholefoods(){
    cout<<Wholefoodstotal<<endl;
}
void Store::printluckysmarket(){
    cout<<Luckysmarkettotal<<endl;
}
void Store::printaltotal(){
    cout<<Alfalfastotal<<endl;
}
