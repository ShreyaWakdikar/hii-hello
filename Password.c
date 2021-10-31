#include<studio.h>
int i,j;
int main_exit;
int main();
{
char pass[10], password[10]="mycap";
int i=0;
printf("\n\n\t Enter the password to login");
scanf("%s", pass);
if(pass[I]!=13&&pass[i]!=8
{
printf("");
pass[i]=getch();
i++
}
while(pass[i]!=13)
pass[10]="\0";
if(strcmp(pass,password)==0)
{
printf("\n\n password match");
}
else
{
printf("\n\n wrong password");
printf("Enter 1 to retry & 0 to exit ");
scanf("%d", &main_exit);
if(main_exit==1)
{
system("cls");
main();
}
else if(main_exit=0)
{
system("cls");
close();
}
else 
{
printf("\n Invalid");
fordelay(1000);
system("cls");
goto login_try;
}
}
return 0;
}




