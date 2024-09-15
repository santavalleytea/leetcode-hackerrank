#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    std::cin >> n;
    
    vector<int> array(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i]; 
    }
    
    int erase_val;
    std::cin >> erase_val;
    
    array.erase(array.begin() + (erase_val - 1));
    
    int start, end;
    std::cin >> start >> end;
    
    array.erase(array.begin() + (start - 1), array.begin() + (end - 1));
    
    std::cout << array.size() << std::endl;
    
    for (int i = 0; i < array.size(); ++i) {
        std::cout << array[i] << " ";
    }
     
    return 0;
}
