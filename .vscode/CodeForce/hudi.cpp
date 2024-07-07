#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Read the four scores
    double N1, N2, N3, N4;
    cin >> N1 >> N2 >> N3 >> N4;

    // Calculate the weighted average
    double average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    cout << "Media: " << fixed << setprecision(1) << average << endl;

    if (average >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (average < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;
        double exam_score;
        cin >> exam_score;
        cout << "Nota do exame: " << exam_score << endl;
        // Recalculate the average including the exam score
        average = (average + exam_score) / 2;
        if (average >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << average << endl;
    }

    return 0;
}
