//
//  main.cpp
//  Running_Sum
//
//  Created by TuyenHoang on 19/9/24.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    unsigned char lArray[5] = {3 , 1, 2, 5 , 6  };
    
    for(int i  = 1; i < sizeof(lArray) ; ++i)
    {
        lArray[i] += lArray[i - 1];
    }
    
    std::cout << lArray << std::endl;
}

int* runningSum (unsigned int pArray[])
{
    for(int i = 0; i < sizeof(pArray); ++i )
    {
        pArray[i] += pArray[i - 1];
    }
    return pArray;
}
