#include <iostream>
#include <map>
using namespace std;

struct Student {
	int midtermScore;
	int finalScore;
};

int main() {
	int numStudents;
	cout << "Enter the number of students: ";
	cin >> numStudents;
	map<string, Student> studentMap;

	for (int i = 0; i < numStudents; i++) {
		string name;
		int midtermScore, finalScore;

		cout << "Enter name of student " << i + 1 << ": ";
		cin >> name;

		cout << "Enter midterm score for " << name << ": ";
		cin >> midtermScore;


		cout << "Enter final score for " << name << ": ";
		cin >> finalScore;

		studentMap[name] = {midtermScore, finalScore};
	}

	cout << "\nStudent Information (Inorder Traversal):\n";
	for (const auto& entry : studentMap) {
		cout << "Name: " << entry.first << ", Midterm Score: " << entry.second.midtermScore << ", Final Score: " << entry.second.finalScore << "\n";
	}

	return 0;
}
