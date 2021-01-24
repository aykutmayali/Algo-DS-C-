#include <iostream>
#include <cmath>
#include <bitset>

int binaryGap(int num);

int main() {
    unsigned long long theNumber = 85;

    std::cout<<"Number: "<<theNumber<<"\n";

    int bGap = binaryGap(theNumber);
    std::cout<<"Gap Higher: "<<bGap;

    return 0;
}

int binaryGap(int num) {
    int gapCurrently = 0;
    int gapHigher = 0;

    std::string binary = std::bitset<64>(num).to_string().substr(std::bitset<64>(num).to_string().find("1")); //to binary
    size_t theZeros = std::count(binary.begin(), binary.end(), '0');

    for(int count=0;count<binary.length();count++)
    {
        if (binary[count] == '0')
        {
            gapCurrently += 1;
        }
        else
        {
            if (gapCurrently > gapHigher)
               gapHigher = gapCurrently;

            gapCurrently = 0;
        }

        if (gapCurrently > gapHigher)
            gapHigher = gapCurrently;

    }

    std::cout<<"Binary: "<<binary<<"\n";
    std::cout<<"Sequence of zeros: "<<theZeros<<"\n";

    return gapHigher;
}
