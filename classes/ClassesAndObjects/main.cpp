#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    private:
        vector<int> scores;
    
    public:
        void input() {
            // Iterate through student's scores
            for (int i = 0; i < 5; ++i) {
                int score;
                std::cin >> score;
                // Append to array
                scores.push_back(score);
            }
        }
        
        // Calculate total score
        int calculateTotalScore() {
            int sum = 0;
            
            for (int score : scores) {
                sum += score;
            }
            
            return sum;
        }
};


int main() {
    int n;
    std::cin >> n;
    
    vector<Student> students(n);
    
    // Append each scores for student array
    for (int i = 0; i < n; ++i) {
        students[i].input();
    }
    
    int count = 0;
    int mainScore = students[0].calculateTotalScore();
    
    // Compare first student's score with the others
    for (int i = 0; i < n; ++i) {
        if (students[i].calculateTotalScore() > mainScore) {
            ++count;
        }
    }
    
    std::cout << count << std::endl;
       
    return 0;
}
