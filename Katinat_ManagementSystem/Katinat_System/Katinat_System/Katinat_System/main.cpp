//
//  main.cpp
//  Katinat_System
//
//  Created by TuyenHoang on 20/9/24.
//



#include "Katinat_Order.hpp"
#include <unordered_set>

using namespace std;
class Box {
private:
    double length;  // Length of a box

public:
    // Constructor to initialize length
    Box(double l) : length(l) {}
    double length1;  // Length of a box
    void Show () const
    
    {
        
    }
    // Declare friend function
    friend void printLength(Box box);
};

// Friend function definition
void printLength(Box box) {
    std::cout << "Length of box: " << box.length << std::endl; // Accessing private member
}


class Box_Child : public Box
{
private:
    int BoxChild = length1;
public:
    Box_Child(double t):Box(t) {}
    void show () const
    {
        cout << BoxChild << endl;
    }
    
};


class Box_Child2 : public Box_Child
{
    void test () const
    {
        
    }
};

double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Division by zero error!");
    }
    return static_cast<double>(numerator) / denominator;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Katinat HCM_Katinat;

    Box_Child lBox_Child(1);
    int choice;
    lBox_Child.show();
    lBox_Child.Show();
    
    
    
    //Define the menu
    vector<MenuItem> menu = {
        {"Espresso", 2.50},
        {"Latte", 3.50},
        {"Cappuccino", 3.00},
        {"Mocha", 3.75},
        {"Iced Coffee", 2.75}
    };
    
    cout << "Welcome to Katinat Coffee!\n";
    
    //Loop to the end
//    while (true){
//        cout << "please select the option: 1. TakeOrder \n " ;
//        cout << "                          2. Add New Item \n " ;
//        cin >> choice;
//        if(choice == 1)
//            HCM_Katinat.takeOrder(menu);
//        else
//            HCM_Katinat.addNewItem(menu);
//    }
    
//    unordered_set<int> mySet = {1 , 2, 3};
//    // Check if an element exists
//        int num = 4;
//        if (mySet.find(num) != mySet.end()) {
//            cout << num << " is in the set." << endl;
//        } else {
//            cout << num << " is not in the set." << endl;
//        }
//    
//    for (auto i = mySet.begin(); i != mySet.end();++i)
//    {
//        cout << *i << endl;
//    }
    
    std::vector<int> nums = {1, 2, 3, 4, 5};

        for (auto num : nums) {
            std::cout << num << " "; // num is deduced as int
        }
    
    for (auto i : nums)
    {
        cout << i << " " ;
    }
        std::cout << std::endl;
    
    Box box(10.5); // Create an object of Box
    printLength(box); // Call friend function
    int num = 10;
    int denom;

    std::cout << "Enter a denominator: ";
    std::cin >> denom;

    try {
        double result = divide(num, denom); // Might throw an exception
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }
    
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    // Accessing elements
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr.at(i) << " "; // Using at() for bounds checking
    }
    std::cout << std::endl;
    
    std::array <int, 7> arr1 = {1,2,3,4,5};
    int vae;
    // pointer to variable
    int * ptr;
    // constant pointer to variable
    int * const ptr1 = &vae;
    // pointer to conster variable
    const int * ptr2;
    // constant pointer to constant variable
    const int * const ptr3 = &vae;
    
    return 0;
}

// Protected and Private

// Protected derived class - 2nd derived class is not accessible


