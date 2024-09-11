#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    
    vector<int> array;
    
    std::cin >> n;
    array.resize(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }
    
    sort(array.begin(), array.end());
    
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    } 
    
    return 0;
}
