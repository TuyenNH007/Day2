//
//  Katinat_Order.hpp
//  Katinat_System
//
//  Created by TuyenHoang on 20/9/24.
//

#ifndef Katinat_Order_hpp
#define Katinat_Order_hpp

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;
// Structure to represent a menu item
struct MenuItem {
    string name;
    double price;
};

class Katinat
{
private:
    unsigned int TestVar;
public:
    
    void displayMenu(const vector<MenuItem>&);
    void takeOrder(const vector<MenuItem>&);
    void addNewItem(vector<MenuItem>&);
};

class KatinatThuDuc : public Katinat
{
private:
    unsigned int TestVar1;
public:
    
};
#endif /* Katinat_Order_hpp */
