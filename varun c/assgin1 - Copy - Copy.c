//program for bio data

#include <stdio.h>

int main() 
{
    char name[50];
    char DOB[25];
    int age;
    char address[100];
    long long int phoneNumber;
    char email[50];
    char mothertongue[55];
    char fathername[45];
    char mothername[64];
    char skills[200];
    printf("Enter your name: ");
    scanf("%s", & name);
    printf("Enter your DOB:\n");
    scanf("%s", & DOB);
    printf("Enter your age: \n");
    scanf("%d", & age);
    printf("Enter your address: \n");
    scanf("%s", & address);
    printf("Enter your phone number: \n");
    scanf("%lld", & phoneNumber);
    printf("Enter your email: \n");
    scanf("%s", & email);
    printf("Enter your mother tongue: \n");
    scanf("%s", & mothertongue);
    printf("Enter your father name: \n");
    scanf("%s",& fathername);
    printf("Enter your mother name: \n");
    scanf("%s", & mothername);
    printf("Enter your skills: \n");
    scanf("%s", & skills);
    printf("\n--- Bio Data ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);
    printf("PhoneNumber: %lld\n", phoneNumber);
    printf("Email: %s\n", email);
    printf("mothertongue: %s\n", mothertongue);
    printf("fathername: %s\n", fathername);
    printf("mothername: %s\n",mothername);
    printf("skills: %s\n", skills);
    printf("DOB: %s\n",DOB);
    return 0;
}