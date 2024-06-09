#include <iostream>
#include <string>

using namespace std;

int main() {
	string courseName, grade;
	double totalGradePoints = 0, indGr = 0, semesGrade;
	int totalCredits = 0, credits=0, classAmount, semesters;
	 

	cout << "How many semesters did you have?" <<endl;
	cin >> semesters;
	for (int i = 0; i < semesters; i++) {
		cout << "How many classes did you take in one Semester?"<< endl;
		cin >> classAmount;
		for (int j = 0; j < classAmount; j++) {
			cout << "What's one course you took?" << endl;
			cin >> courseName;
			cout << "How many credits was the course?" << endl;
			cin >> credits;
			cout << "What was your grade in this course? (letter course ex: A, B, etc.)" << endl;
			cin >> grade;

			if(grade == "A") {
				indGr = 4;
			}else if (grade == "A-") {
				indGr = 3.7;
			}
			else if (grade == "B+") {
				indGr = 3.3;
			}
			else if (grade == "B") {
				indGr = 3;
			}
			else if (grade == "B-") {
				indGr = 2.7;
			}
			else if (grade == "C+") {
				indGr = 2.3;
			}
			else if (grade == "C") {
				indGr = 2;
			}
			else if (grade == "C-") {
				indGr = 1.7;
			}
			else if (grade == "D+") {
				indGr = 1.3;
			}
			else if (grade == "D") {
				indGr = 1;
			}
			else if (grade == "F") {
				indGr = 0;
			}
			else {
				cout << "Invalid grade entered. Please enter a grade as prompted." << endl;
				j--;
				continue;
			}
			cout << indGr << endl;;
			totalGradePoints += indGr * credits;
			totalCredits += credits;
		}
		if (totalCredits > 0) {
			double gpa = totalGradePoints / totalCredits;
			cout << "Your total GPA is: " << gpa << endl;
		}
		else {
			cout << "No valid credits entered. GPA can not be calculated." << endl;
		}
	}
}