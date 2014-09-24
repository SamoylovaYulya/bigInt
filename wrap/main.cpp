#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LongNumb.h"
using namespace std;
int main()
{
//Variables
char string4parse[256], file1[32], file2[32], oper[2], res[32], binMark[32], modFile[32];
int base = 10,spaces = 0;
bool ModBool = true;
printf("Enter string in such way:\n");
printf("[file1] [operator] [file2] [result file] [-b] [mod file]\n");
gets(string4parse);
sscanf(string4parse,"%s %s %s %s %s %s",&file1,&oper,&file2,&res,&binMark,&modFile);
for(int i =0;i<strlen(string4parse)-1;i++) if(string4parse[i] == ' ') spaces++;
if(strcmp(binMark,"-b") != 0) strcpy(modFile,binMark);
else base = 256;
if ((spaces == 4 && base == 256) || (spaces == 3 && base == 10)) ModBool = false;
//Action
LongNumb a = a.Read(file1,base);
LongNumb b = b.Read(file2,base);
if(oper[0] == '+') a = a + b;
else if(oper[0] == '-') a = a - b;
else if(oper[0] == '*') a = a * b;
else if(oper[0] == '/') a = a / b;
else if(oper[0] == '^') a = a ^ b;
else if(oper[0] == '%') a = a % b;
if(ModBool)
{
LongNumb m = m.Read(modFile,base);
a = a % m;
}
a.Write(res);
return 0;
}
