#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPalindrome(string s) {
    ll left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;

}

int main() {
//
//     // 1 palindrom.
//     string s;
//     cin >> s;
//     if (isPalindrome(s)) {
//         cout << "it is Palindrome" << endl;
//     }
//     else {
//         cout << "it is not Palindrome" << endl;
//     }
// //-------------------------------------------
//
// // مفهمتش انت طالب ايه
//     // 2 teams of 3.
//     ll team,prog ,Football,chess;
//     cout<<"Enter the number of programers: ";
//     cin >> prog ;
//     cout<<"Enter the number of Football players: ";
//     cin >> Football;
//     cout<<"Enter the number of chess players: ";
//     cin >> chess;
//     team = min(prog,min(Football,chess));
//     cout << "num of Teams: "<< team << endl;
// //-------------------------------------------
//
//     // 3 gpa calculator
//     map<string, double> gradeToGpa ;
//     gradeToGpa["F"] = 0;
//     gradeToGpa["D-"] = 0.7 ;
//     gradeToGpa["D"] = 1 ;
//     gradeToGpa["D+"] = 1.3 ;
//     gradeToGpa["C-"] = 1.7;
//     gradeToGpa["C"] = 2;
//     gradeToGpa["C+"] = 2.3 ;
//     gradeToGpa["B-"] = 2.7;
//     gradeToGpa["B"] = 3;
//     gradeToGpa["B+"] = 3.3 ;
//     gradeToGpa["A-"] = 3.7 ;
//     gradeToGpa["A"] = 4 ;
//     gradeToGpa["A+"] = 4 ;
//     cout << "num of courses : ";
//     ll numOfCourses;
//     cin >> numOfCourses;
//     vector<tuple<string,ll,string>> courses(numOfCourses);
//     ll totalHours = 0;
//     double totalGPA=0;
//     double totalPoints=0;
//     for (ll i = 0; i < numOfCourses; i++) {
//         string course,gpa;
//         ll hours;
//         cout<<"courses #"<<i+1<<"Name: ";
//         cin>>course;
//         cout<<"credit: ";
//         cin>>hours;
//         totalHours += hours;
//         cout<<"Grade: ";
//         cin>>gpa;
//         gpa[0] = toupper(gpa[0]);
//         totalPoints += hours * gradeToGpa[gpa];
//         courses[i]= make_tuple(course,hours,gpa);
//     }
//     cout << string(50, '-') << endl;
//     cout << left << setw(15) << "Course"
//         << setw(10) << "Credits"
//         << setw(10) << "Grade" << endl;
//
//     for (ll i = 0; i < numOfCourses; i++) {
//         cout << left << setw(15) << get<0>(courses[i])
//               << setw(10) << get<1>(courses[i])
//               << setw(10) << get<2>(courses[i]) << endl;
//     }
//     cout << string(50, '-') << endl;
//     cout <<"GPA: " <<totalPoints/totalHours << endl;
//     cout <<"total Credits: " << totalHours<<endl;
 }