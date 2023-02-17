#include <stdio.h>

//  https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-2.3

int main() {
	
	// Task #1
	int pin1,pin2;
	printf("pin1=");
	scanf("%i",&pin1);
	printf("pin2=");
	scanf("%i",&pin2);
	
	if((pin1==555)&&(pin2=333))
	{
		printf("OK\n");
		printf("END Task 1\n");
		printf("\n");
	}
	else
	{
		printf("ERROR\n");
		printf("END Task 1\n");
		printf("\n");
	}
	
	// Task #2
	printf("Task 2\n");
    long long int login1 = 12345;
    long long int password1 = 67890;
    long long int login2 = 98765;
    long long int password2 = 43210;

    long long int userLogin, userPassword;
    printf("input login: ");
    scanf("%i", &userLogin);
    printf("input pass: ");
    scanf("%i", &userPassword);

    if ((userLogin == login1 && userPassword == password1) || (userLogin == login2 && userPassword == password2)) {
        printf("Good login | pass");
    } else {
        printf("Error login | pass");
    }
}