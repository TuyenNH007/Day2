//
//  Katinat_Order.cpp
//  Katinat_System
//
//  Created by TuyenHoang on 20/9/24.
//

#include "Katinat_Order.hpp"


void Katinat::displayMenu(const vector<MenuItem>& menu)
{
    cout << "##############################\n";
    cout << "Katinat Coffee Menu:\n";
    for(size_t i = 0; i < menu.size();++i)
    {
        cout << i + 1 << "." << menu[i].name << "- $" << menu[i].price << endl;
    }
    cout << "0.Exit \n";
}

void Katinat::takeOrder(const vector<MenuItem>& menu)
{
    vector<int> orders;
    int choice;
    double total = 0.0;
    
    //Loop to the end
    while (true){
        displayMenu(menu);
        cout << "please select the item by number (0 to finish): " ;
        cin >> choice;
        
        if(choice == 0)
            break; // exit the loop
        else if (choice > 0 && choice <= menu.size())
        {
            // store the selected item
            orders.push_back(choice - 1);
            total += menu[choice -1].price; // update the total price
            cout << "=>>>> Added " << menu[choice - 1].name << " to your order. \n" ;
        }
        else
        {
            cout << "Invalid choice, please try again. \n";
        }
    }
    // Display order summury
    cout << "\nYour Order Summury: \n" ;
    for (int index : orders){
        cout << "- " << menu[index].name << endl;
    }
    cout << "Total: $ " << total << endl;
}

//Add new item into the menu
void Katinat::addNewItem(vector<MenuItem> &menu)
{
    string newItemName;
    double newItemPrice;
    cout << "Input new item's name ?\n" ;
    cin >> newItemName;
    cout << "Input new item's price ?\n";
    cin >> newItemPrice;
    
    menu.push_back({newItemName, newItemPrice});
    cout << "Added " << newItemName << " with $: " << newItemPrice << "to the menu" << endl;
    cout << "menu size" << menu.size() << endl;
    
    
}
