#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// HackerRank Strings

int main() {
    string a,b,c;
    string aNew, bNew;
    int aSize, bSize;
    
    std::cin >> a >> b;
    
    // Size of both a and b
    aSize = a.size();
    bSize = b.size();
    
    // Concatenate two strings
    c = a + b;
    
    // Swap first letter of a with first letter of b
    aNew = b[0] + a.substr(1);
    bNew = a[0] + b.substr(1);
    
    std::cout << aSize << " " << bSize << std::endl;
    std::cout << c << std::endl;
    std::cout << aNew << " " << bNew << std::endl;
      
    return 0;
}
