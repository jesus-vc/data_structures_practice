//
//  main.cpp
//  data_structures_test
//
//  Created by Jesus Vasquez-Cipriano on 4/26/21.
//  Copyright © 2021 Jesus Vasquez-Cipriano. All rights reserved.
//
//Description: Testing structs. Items in structs are public, unless in private.

//Testing classes next for methods.

#include <iostream>

struct Ciprianos
{
    //let's add a method:
    std::string get_address()
    {
        return address;
    }
    std::string first;
    std::string last;
    std::string city;
private:
    std::string address = "345 S";
};


int main(int argc, const char * argv[])

{
    //we create an instance/object that uses the Jesus template.
    Ciprianos u1;
    u1.first = "Jules";
    u1.last = "Cipriano";
    u1.city = "San Jose";
    
    std::cout << "Address: " << u1.get_address();
    return 0;
}
