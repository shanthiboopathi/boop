#include<ctype.h>
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
for(;;)
{
ch = getc(stdin);
if(ch == '.') break;
if(isnumeric(ch)) printf("%c is numeric\n", ch);
}
getch();
}
