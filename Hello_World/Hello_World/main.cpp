//
//  main.cpp
//  Hello_World
//
//  Created by TuyenHoang on 19/9/24.
//

#include <iostream>

using namespace std;



class HeadQ_Katinat
{
public:
    void HeadQ_Katinat_LogIn() const;
    void HeadQ_Katinat_Order() const;
private:
    unsigned int Employee_Size;
    unsigned int Manager_Size;
    unsigned int Guard_Size;
};

void HeadQ_Katinat::HeadQ_Katinat_LogIn() const
{
    cout << "Welcome to Katinat" << endl;
}
void HeadQ_Katinat::HeadQ_Katinat_Order() const
{
    cout << "Which beverage you would like to order" << endl;
}

class Branch_DangVanBi_Katinat : public HeadQ_Katinat
{
public:
    //Only service existing in branch - sale 50%
    void Branch_DVB_SaleOff_Code() const;
private:
    unsigned int gameID;
};

void Branch_DangVanBi_Katinat::Branch_DVB_SaleOff_Code() const
{
    cout << "welcome to branch Katinat " << endl;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


