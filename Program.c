#include <stdio.h>

int main()
{
    char name[120] ,country[30];
	char skill,languages;
	int age;
    printf("Welcome to Hacktoberfest 2020\n");
    printf("Enter your Full name : ");//Get User name
    gets(name);
    printf("Enter your Country  : ");//Get user country
    gets(country);
    printf("Enter your Age : ");//Get user Age
    scanf("%d",&age);
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest) : ");//Get user skill level
    scanf(" %c",&skill);
    printf("what are your expetise areas   : ");//Get user expertise areas
    scanf(" %c",&languages);
    printf("Thank you %s Happy Hacking 2020",name);//Thanking the user

    return 0;
}
