#include<stdio.h>
#include<string.h>
int main(){
char name[15];
printf("enter your name;");
scanf("%s",&name);
printf("your name is %s\n",name);
int length=strlen(name);
printf("%d",length);
strcpy(name,"chethan");
int comparision=strcmp("ayush.h","ayu");
printf("%d\n",comparision);
printf("%s\n",name);
}
