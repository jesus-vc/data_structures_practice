//
//  main.cpp
//  practice_structs
//
//  Created by Jesus Vasquez-Cipriano on 4/26/21.
//  Copyright © 2021 Jesus Vasquez-Cipriano. All rights reserved.
//

#include <iostream>

//We created a data structure here.
//items in structs are public, unless in private.
//Structs used to contain data variables of a particular data type. Not usually for methods.
//To use methods, better to use Class
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
    u1.first = "Jason";
    u1.last = "Cipriano";
    u1.city = "San Jose";
    
    std::cout << "Address: " << u1.get_address();
    return 0;
}
