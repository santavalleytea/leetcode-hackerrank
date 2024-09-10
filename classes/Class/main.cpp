#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    private:
        int age;
        int standard;
        string first_name;
        string last_name;
        
    public:
        void set_age(int val) {
            age = val;
        }
        
        int get_age() {
            return age;   
        }
        
        void set_first_name(string val) {
            first_name = val;
        }
        
        string get_first_name() {
            return first_name;
        }
        
        void set_last_name(string val) {
            last_name = val;
        }
        
        string get_last_name() {
            return last_name;
        }
        
        void set_standard(int val) {
            standard = val;
        }
        
        int get_standard() {
            return standard;
        }
};

int main() {
    Student student;
    int age;
    string first_name;
    string last_name;
    int standard;
    
    std::cin >> age;
    std::cin >> first_name;
    std::cin >> last_name;
    std::cin >> standard;
    
    student.set_age(age);
    student.set_first_name(first_name);
    student.set_last_name(last_name);
    student.set_standard(standard);
    
    std::cout << student.get_age() << std::endl;
    std::cout << student.get_last_name() << "," << " " << student.get_first_name() << std::endl;
    std::cout << student.get_standard() << std::endl << std::endl;  
    std::cout << student.get_age() << "," << student.get_first_name() << "," <<  student.get_last_name() 
    << "," << student.get_standard();
    return 0;
}
