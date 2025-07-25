#include <iomanip>
#include <iostream>
using namespace std;

//*****************************************************************************************************

int main() {
    const int ASSIGN_PERCENT = 15,
              TEST_PERCENT = 50,
              EXAM_PERCENT = 30,
              PARTIC_PERCENT = 5;
    float assignWeight,
        testWeight,
        examWeight,
        particWeight,
        PercentOutOf100,
        sum_of_all_weights,
        avg;

    cout << "Grade Calculator - Computer Programming I" << endl;

    cout << "\nThe weight of each deliverable on their final grade\n"
         << "\tProgramming Assignments: " << ASSIGN_PERCENT << "%\n"
         << "\tChapter Tests: " << TEST_PERCENT << "%\n"
         << "\tFinal Exam: " << EXAM_PERCENT << "%\n"
         << "\tClass Participation: " << PARTIC_PERCENT << "%" << endl;

    cout << "\nWhat is the graded percentage (out of 100%) for Programming Assignments? ";
    cin >> PercentOutOf100;

    assignWeight = PercentOutOf100 * ASSIGN_PERCENT;

    cout << "What is the graded percentage (out of 100%) for Chapter Tests? ";
    cin >> PercentOutOf100;

    testWeight = PercentOutOf100 * TEST_PERCENT;

    cout << "What is the graded percentage (out of 100%) for Final Exam? ";
    cin >> PercentOutOf100;

    examWeight = PercentOutOf100 * EXAM_PERCENT;

    cout << "What is the graded percentage (out of 100%) for Class Participation? ";
    cin >> PercentOutOf100;

    particWeight = PercentOutOf100 * PARTIC_PERCENT;

    sum_of_all_weights = (ASSIGN_PERCENT + TEST_PERCENT + EXAM_PERCENT + PARTIC_PERCENT);
    avg = (assignWeight + testWeight + examWeight + particWeight) / sum_of_all_weights;

    cout << fixed << setprecision(2);

    cout << "\n\n\t" << assignWeight / sum_of_all_weights << "% in Programming Assignments\n"
         << "\t" << testWeight / sum_of_all_weights << "% in Chapter Tests\n"
         << "\t" << examWeight / sum_of_all_weights << "% in Final Exam\n"
         << "\t" << particWeight / sum_of_all_weights << "% in Class Participation" << endl;

    cout << "\n\nFinal Grade: " << avg << "%" << endl;

    if (avg >= 97 || avg == 100)
        cout << "\nYour Grade is A+";
    else if (avg >= 94 && avg <= 96)
        cout << "\nYour Grade is A";
    else if (avg >= 90 && avg <= 93)
        cout << "\nYour Grade is A-";
    else if (avg >= 87 && avg <= 89)
        cout << "\nYour Grade is B+";
    else if (avg >= 84 && avg <= 86)
        cout << "\nYour Grade is B";
    else if (avg >= 80 && avg <= 83)
        cout << "\nYour Grade is B-";
    else if (avg >= 77 && avg <= 79)
        cout << "\nYour Grade is C+";
    else if (avg >= 74 && avg <= 76)
        cout << "\nYour Grade is C";
    else if (avg >= 70 && avg <= 73)
        cout << "\nYour Grade is C-";
    else if (avg >= 60 && avg <= 69)
        cout << "\nYour Grade is D";
    else
        cout << "\nYour Grade is F";

    return 0;
}
