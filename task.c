#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
	char username[20];
	char password[12];
	char user[20];
	char Password[12];
	printf("welcome to register \n");
	printf("Enter username: ");
    scanf("%s",&user);

    printf("Enter password: ");
    scanf("%s",&Password);

    printf("User registered successfully.\n");
    
	printf(" welcome to Login :\n" );
	printf("Enter your username : ");
	scanf("%s" ,&username);
	printf(" Enter your password : ");
	scanf("%s" ,&password);
	
	if(strcmp(username ,"alaa")==0){
		if(strcmp(password ,"0123")==0){
			printf("login success !");
		}
	}
	else {
		printf("\n wrong username or password ,please try again");
	}
}
