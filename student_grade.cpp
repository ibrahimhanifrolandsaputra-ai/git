#include <iostream>
using namespace std;

struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

int inputStudents(studentType students[], int maxClass) {
    int n;
    cout << "Masukkan jumlah siswa (maks " << maxClass << "): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nData siswa ke-" << i + 1 << ":\n";
        cout << "Nama depan: ";
        cin >> students[i].studentFName ;
        cout << "Nama belakang: ";
        cin >> students[i].studentLName ;
        cout << "Nilai ujian (0 - 100): ";
        cin >> students[i].testScore;
    }

    return n;
}

char assignGrade(int score) {
    if (score >= 90)
        return 'A';
    else if (score >= 80)
        return 'B';
    else if (score >= 70)
        return 'C';
    else if (score >= 60)
        return 'D';
    else
        return 'F';
}

int findHighest(studentType students[], int n) {
    int highest = students[0].testScore;
    for (int i = 1; i < n; i++) {
        if (students[i].testScore > highest)
            highest = students[i].testScore;
    }
    return highest;
}

int printAllStudents(studentType students[], int n) {
    cout << "\nDaftar Nilai Siswa:\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].studentLName << ", " << students[i].studentFName;
        cout << " | Nilai: " << students[i].testScore;
        cout << " | Grade: " << students[i].grade << endl;
    }
    return 0;
}

int printHighest(studentType students[], int n, int highest) {
    cout << "\nNilai tertinggi adalah: " << highest << endl;
    cout << "Diperoleh oleh:\n";
    for (int i = 0; i < n; i++) {
        if (students[i].testScore == highest) {
            cout << students[i].studentLName << ", " << students[i].studentFName;
            cout << " (Nilai: " << students[i].testScore << ", Grade: " << students[i].grade << ")" << endl;
        }
    }
    return 0;
}

int main() {
    studentType students[20];
    int n;

    n = inputStudents(students, 20);

    for (int i = 0; i < n; i++) {
        students[i].grade = assignGrade(students[i].testScore);
    }

    int highest = findHighest(students, n);

    printAllStudents(students, n);
    printHighest(students, n, highest);

    return 0;
}
