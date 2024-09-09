#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    typedef struct {
        int age;
        int standard;
        string first_name;
        string last_name;
    } Student; 
     
    Student student;
    
    cin >> student.standard >> student.first_name
    >> student.last_name >> student.age;
    
    cout << student.standard << " ";
    cout << student.first_name << " ";
    cout << student.last_name << " ";
    cout << student.age << " ";
    
    return 0;
}
