#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

double calculateTotal(const vector<double>& marks) {
    double total = 0;
    for (double mark : marks) {
        total += mark;
    }
    return total;
}

double calculateAverage(const vector<double>& marks) {
    if (marks.empty()) return 0;
    return calculateTotal(marks) / marks.size();
}

double findHighest(const vector<double>& marks) {
    double highest = marks.at(0);
    for (double mark : marks) {
        if (mark > highest) highest = mark;
    }
    return highest;
}

double findLowest(const vector<double>& marks) {
    double lowest = marks.at(0);
    for (double mark : marks) {
        if (mark < lowest) lowest = mark;
    }
    return lowest;
}

string calculateGrade(double average) {
    if (average >= 90) return "A";
    if (average >= 80) return "B";
    if (average >= 70) return "C";
    if (average >= 60) return "D";
    if (average >= 50) return "E";
    return "F";
}

int main() {
    int subjectCount;

    cout << "=== Marks Manager ===\n";
    cout << "Enter the number of subjects: ";

    while (!(cin >> subjectCount) || subjectCount <= 0) {
        cout << "Please enter a positive whole number of subjects: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<double> marks;
    marks.reserve(subjectCount);

    for (int i = 0; i < subjectCount; ++i) {
        double mark;
        cout << "Enter marks for subject " << (i + 1) << " (0-100): ";

        while (!(cin >> mark) || mark < 0 || mark > 100) {
            cout << "Invalid marks. Enter a number from 0 to 100: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        marks.push_back(mark);
    }

    const double total = calculateTotal(marks);
    const double average = calculateAverage(marks);
    const double highest = findHighest(marks);
    const double lowest = findLowest(marks);
    const string grade = calculateGrade(average);

    cout << "\n=== Results ===\n";
    cout << fixed << setprecision(2);
    cout << "Total marks : " << total << " / " << (marks.size() * 100) << '\n';
    cout << "Average     : " << average << '\n';
    cout << "Highest     : " << highest << '\n';
    cout << "Lowest      : " << lowest << '\n';
    cout << "Letter grade: " << grade << '\n';

    return 0;
}
