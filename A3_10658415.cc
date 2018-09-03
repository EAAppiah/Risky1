#include <iostream>

using namespace std;

int main()

{
    int grade_num;
    cout<< "Please enter numeric grade:"<< endl;
    cin>> grade_num;

char get_letter_grade (int grade_num);

    if (grade_num <= 44) {
        cout<< "The letter grade is F"<< endl;
}   

    else if(grade_num >= 45 && grade_num <= 49){
    cout<< "The letter grade is E"<< endl;
	}
	
    else if (grade_num >= 50 && grade_num <= 54){
        cout<< "The letter grade is D"<< endl;
		}
		
    else if (grade_num >= 55 && grade_num <= 59){
        cout<< "The letter grade is D+"<< endl;
		}
		
    else if (grade_num >= 60 && grade_num <= 64){
        cout<< "The letter grade is C"<< endl;
		}
		
	else if (grade_num >= 65 && grade_num <= 69){
		cout<< "The letter grade is C+"<< endl;
	}
	
	else if (grade_num >= 70 && grade_num <= 74){
		cout<< "The letter grade is B"<< endl;
	}
	
	else if (grade_num <= 79 && grade_num >= 75){
		cout<< "The letter grade is B+"<< endl;
	}
	
	else if (grade_num >= 80 && grade_num <= 100){
		cout<< "The letter grade is A"<< endl;
	}
	if(grade_num > 100){
		cout<<"Invalid Number"<< endl;
	}
	system ("pause");
return 0;
}
