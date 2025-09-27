#include <stdio.h>

int main(void) {
	int mid, fin; //Middle or Final Score
	double avg;  //Average Score(Mid 40%, Fin 60%)
	int avg_int; //Average Score(Integer)
	char grade; //Grade(A~F)
	
	
	//Input Score as INT
	printf("Input Middle Score: ");
	scanf("   ", &mid);
	
	printf("Input Final Score: ");
	scanf("   ", &fin);
	
	
	//Middle 40%, Final 60%
	avg = mid *    + fin *   ;
	
	printf("Average Score: %0.2f\n", avg);
	
	//Cast it to an Integer.
	avg_int = ;
	
	printf("Average Score(Integer): %d\n", rounded);
	
	//Decide the final grade.
	grade = () ? 'A'
			: () ? 'B'
			: () ? 'C'
			: () ? 'D' : 'F';
			
	printf("Grade: %c\n", grade);
	
	return 0;

}
