// BuiltInArrayPlay.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
    //char Name[] = { 'D','a', 'v', 'i', 'd', '\0' };
    char Name[] = { "David" };

    // output built-in array Name using array subscript notation
    std::cout << "Array Name displayed with:\n\nArray subscript notation\n";

    for (size_t i = 0; i < 5; ++i)
        std::cout << "Name[" << i << "] = " << Name[i] << '\n';
    
    char * pName = Name;
    // output built-in array Name using array name and pointer/offset notation
    std::cout << "\nPtr/offset notation where the ptr is the array name\n";

    for (size_t offset = 0; offset < 5; ++offset)
        std::cout << "*(Name + " << offset << ") = " << *(Name + offset) << '\n';


    double Numbers[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    // output built-in array Numbers using array subscript notation
    std::cout << "Array Numbers displayed with:\n\nArray subscript notation\n";

    for (size_t i = 0; i < 5; ++i)
        std::cout << "Numbers[" << i << "] = " << Numbers[i] << '\n';
    
    // output built-in array Numbers using array name and pointer/offset notation
    std::cout << "\nPtr/offset notation where the ptr is the array name\n";

    for (short i = 0; i < 5; ++i)
        std::cout << "*(Numbers + " << i << ") = " << *(Numbers + i) << '\n';

    std::string Strings[] = { "David Thiessen", "XXX-XX-8991", "580-574-7463", "10 APR 1965", "44871 St Andrews Church Rd, California, MD 20619" };

    // output built-in array Name using array subscript notation
    std::cout << "Array Strings displayed with:\n\nArray subscript notation\n";

    for (size_t i = 0; i < 5; ++i)
        std::cout << "Strings[" << i << "] = " << Strings[i] << '\n';
 
    // output built-in array Numbers using array name and pointer/offset notation
    std::cout << "\nPtr/offset notation where the ptr is the array name\n";

    for (short i = 0; i < 5; ++i)
        std::cout << "*(Strings + " << i << ") = " << *(Strings + i) << '\n';

    return 0;
}