#ifndef STORE_H
#define STORE_H
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Store
{
    public:
        Store(int n);
        ~Store();

        void printwholefoods();
        void printluckysmarket();
        void printaltotal();
        int getData();


    protected:
    private:
        int Wholefoodstotal;
        int Luckysmarkettotal;
        int Alfalfastotal;
        int Wholefoods;

};

#endif // STORE_H
