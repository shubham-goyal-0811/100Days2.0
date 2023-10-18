/*
create classes for student and subject make a leaderboard and display top 5 students ranking would be in terms of their total marks. Multiple students can have same rank. Suppoose student A and B have 95 marks so they both have rank 1,Then student c have 94 marks so it will have a rank 3.
*/


//More progress is required and it will be done :)
#include <bits/stdc++.h>
using namespace std;
#define max_size 3

class subject {
private:
    string subjectname;
    int marks;
public:
    void set_sub(string name, int ma) {
        subjectname = name;
        marks = ma;
    }
    int getmarks() {
        return marks;
    }
};

class student {
private:
    string name;
    subject sub[max_size];
public:
    void setsub(string na, subject s1, subject s2, subject s3) {
        name = na;
        sub[0] = s1;
        sub[1] = s2;
        sub[2] = s3;
    }
    int totalMarks() {
        int tot = 0;
        for (int i = 0; i < max_size; i++) {
            tot += sub[i].getmarks();
        }
        return tot;
    }
    string getName() {
        return name;
    }

};

void leaderboard(student stu[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stu[j].totalMarks() < stu[j + 1].totalMarks()) {
                swap(stu[j], stu[j + 1]);
            }
        }
    }
    int rank = 1;
    cout << "Rank\tName\tTotal marks\n";
    cout << "==========================\n";
    int flag = 1;
    for (int i = 0; i < 5; i++) {
        cout << rank << "\t" << stu[i].getName() << "\t" << stu[i].totalMarks() << "\n";

        if (i < n - 1 && stu[i].totalMarks() == stu[i + 1].totalMarks()) {
            flag++;
        } 
        else {
            rank += flag;
            flag = 1;
        }
    }
}

int main() {
    student students[6];
    subject s1, s2, s3;

    s1.set_sub("Math", 95);
    s2.set_sub("Physics", 92);
    s3.set_sub("Chemistry", 90);
    students[0].setsub("Student A", s1, s2, s3);

    s1.set_sub("Math", 95);
    s2.set_sub("Physics", 90);
    s3.set_sub("Chemistry", 85);
    students[1].setsub("Student B", s1, s2, s3);

    s1.set_sub("Math", 94);
    s2.set_sub("Physics", 88);
    s3.set_sub("Chemistry", 92);
    students[2].setsub("Student C", s1, s2, s3);

    s1.set_sub("Math", 88);
    s2.set_sub("Physics", 82);
    s3.set_sub("Chemistry", 85);
    students[3].setsub("Student D", s1, s2, s3);

    s1.set_sub("Math", 90);
    s2.set_sub("Physics", 95);
    s3.set_sub("Chemistry", 92);
    students[4].setsub("Student E", s1, s2, s3);

    s1.set_sub("Math", 90);
    s2.set_sub("Physics", 95);
    s3.set_sub("Chemistry", 93);
    students[5].setsub("Student F", s1, s2, s3);

    leaderboard(students, 6);
}
