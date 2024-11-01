#include<stdio.h>
#include<string.h>
int main(){
	char username[10]={"admin"};
	char password[5]={"1234"};
	 char entered_username[50];
    char entered_password[50];
    printf("Enter your username: ");
    scanf("%s", entered_username);
    printf("Enter your password: ");
    scanf("%s", entered_password);
    if (strcmp(entered_username, username) == 0 && strcmp(entered_password, password) == 0) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n");
    }

    return 0;
}