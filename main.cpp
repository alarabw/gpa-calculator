#include <iostream>
#include <string>
using namespace std;

double gradeToPoint(const string& grade) {
    if (grade == "AA") return 4.0;
    if (grade == "BA") return 3.5;
    if (grade == "BB") return 3.0;
    if (grade == "CB") return 2.5;
    if (grade == "CC") return 2.0;
    if (grade == "DC") return 1.5;
    if (grade == "DD") return 1.0;
    if (grade == "FD") return 0.5;
    return 0.0; // FF
}

int main() {
    int count;
    cout << "How many courses? ";
    cin >> count;

    double totalPoints = 0;
    int totalCredits = 0;

    for (int i = 1; i <= count; i++) {
        string name, grade;
        int credit;
        cout << "\nCourse " << i << " name: ";
        cin >> name;
        cout << "Credit: ";
        cin >> credit;
        cout << "Letter grade (AA, BA, ...): ";
        cin >> grade;

        totalPoints += gradeToPoint(grade) * credit;
        totalCredits += credit;
    }

    if (totalCredits > 0)
        cout << "\nGPA: " << totalPoints / totalCredits << endl;
    return 0;
}
