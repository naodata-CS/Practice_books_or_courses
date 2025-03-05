#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

int main() {
    signed char a = 1; //8 bits data -128 to 127, explicitly signed, full name
    unsigned char b = 2; //8 bits data 0 to 255, can't store negative values
    short c = 3; //16 bits in data from -32,768 to 32,767, implicitly signed, abbreviation name    
    short int d = 4; //16 bits in data from -32,768 to 32,767, implicitly signed, full name 
    signed short e = 5; //16 bits in data from -32,768 to 32,767, explicitly signed, abbreviation name
    signed short int f = 6; //16 bits in data from -32,768 to 32,767, explicitly signed, full name
    unsigned short g = 7; //16 bits in data from 0 to 65,536, can't store negative values, abbreviation name
    unsigned short int h = 8; //16 bits in data from 0 to 65,536, can't store negative values, full name
    int ii = 9; //16 bits in data from -32,768 to 32,767, implicitly signed, full name
    signed int i = 10; //16 bits in data from -32,768 to 32,767, explicitly signed, full name
    unsigned j = 11; //16 bits in data from 0 to 65,536, can't store negative values, abbreviation name
    unsigned int k = 12; //16 bits in data from 0 to 65,536, can't store negative values, full name
    long l = 13; //32 bits in data from  -2,147,483,648 to 2,147,483,647, implicitly signed, abbreviation name
    long int m = 14; //32 bits in data from  -2,147,483,648 to 2,147,483,647, implicitly signed, full name
    signed long n = 15; //32 bits in data from  -2,147,483,648 to 2,147,483,647, explicitly signed, abbreviation name
    signed long int o = 16; //32 bits in data from  -2,147,483,648 to 2,147,483,647, explicitily signed, full name
    unsigned long p = 17;  //32 bits in data from 0 to 4,294,967,295, can't store negative values, abbreviation name
    unsigned long int q = 18; //32 bits in data from 0 to 4,294,967,295, can't store negative values, full name
    long long r = 19;  //64 bits in data from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807, implicitly signed, abbreviation name
    long long int s = 20; //64 bits in data from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807, implicitly signed, full name
    signed long long t=21;  //64 bits in data from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807, explicitly signed, abbreviation name
    signed long long int u=22; //64 bits in data from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807, explicitly signed, full name
    unsigned long long v=23; //64 bits in data from 0 to 18,446,744,073,709,551,615, explicitly signed, abbreviation name
    unsigned long long int w=24; //64 bits in data from 0 a 18,446,744,073,709,551,615, explicitly signed, full name
    bool x = true; //8 bits in data from 0 (false) to 1 (true)
    //signed char and unsigned char with quotes are read like character because quotes specify that context
    float y = 25.00;  //32 bits in data from ±1.75 * 10⁻³⁸ to ±3.403 * 10³⁸, explicitly signed, full name
    double z = 26.00; //64 bits in data from ±2.225 * 10⁻³⁰⁸ to ±1.798 * 10³⁰⁸, explicitly signed, full name
    long double a1=27.00; //min 80 bits - max 128 bits in data from 3.362 x 10⁻³²⁶ to 1.189 x 10³²⁶ (80 bits) - 3.362 x 10⁻⁴⁹³² to 1.190 x 10⁴⁹³² (128 bits) explicitly signed, full name
    std::string b1 = "Hello\n"; //Data type string is part of the standard template library, but is not a native data type from C++, variable size
    std::cout<<static_cast<int>(a);
    std::cout<<static_cast<int>(b);
    std::cout<<c<<d<<e<<f<<g<<h<<i<<ii<<j<<k<<l<<m<<n<<o<<p<<q<<r<<s<<t<<u<<v<<w<<x<<y<<z<<a1<<b1;
    return 0;
    //0 -> sign(0 +, 1 -) -> [1 + mantissa (2 ^ start with -1 to -23)]  x [ (8 bits - exponent | 2 ^ from 0 to 7) - 127] 
    //11000000001000000000000000000000 -> - |(1+2^-2) x (2^128-127)| -> - | 5/4 x 1 | -> - 1.25
    //01111111010000000000000000000000 -> + |(1+2^-1) x (2^254-127)| -> + 3/2 x (2^127) -> 2552117755190703847597530955573826158592
    //for convert from decimal to binary -> dec . decimal -> convert from dec to binary | multiply decimal by 2 if number is > 1 sustract 1 and when it is 1 its ok
    //after that for example if the number is 10.75 is 2^3 so that exponent es (x-127=3), for that is 130 and put into binary so later put
    //all together sign | exponent | mantissa
    //-3.14 to binary float is 11110000000010000010010000000100
    //-300 -> two complement | revert 0 to 1 and 1 to 0, finally +1 | -> 111111111111111111111111011010100        
}
