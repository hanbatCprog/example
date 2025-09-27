#include <stdio.h>

int main(void) {
    int mid, fin;          // Middle or Final Score
    double avg;            // Average Score(Mid 40%, Fin 60%)
    int avg_int;           // Average Score(Integer)
    char grade;            // Grade(A~F)

    // Input Score as INT
    printf("Input Middle Score: ");
    scanf(/* #0 */, &mid);

    printf("Input Final Score: ");
    scanf(/* #1 */, &fin);

    // Middle 40%, Final 60%
    avg = mid * /* #2 */ + fin * /* #3 */;

    printf("Average Score: %0.2f\n", avg);

    // Cast it to an Integer.
    avg_int = /* #4 */;

    printf("Average Score(Integer): %d\n", avg_int);

    // Decide the final grade.
    grade = (/* #5 */) ? 'A'
          : (/* #6 */) ? 'B'
          : (/* #7 */) ? 'C'
          : (/* #8 */) ? 'D' : 'F';

    printf("Grade: %c\n", grade);
    return 0;
}
