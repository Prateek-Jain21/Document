#include<stdio.h>
int main()
{ 
    char ch;
    int n = 0;
    FILE *fptr = fopen("T.txt","w+");
    FILE *fp = fopen("X.txt","w+");
    printf("Enter The Characters? \n");
    while(n<5)
    { 
      ch = getchar();
      getchar();
      putc(ch,fptr);
      n++;
    } 
   rewind(fptr);
   while((ch=getc(fptr))!=EOF)
   {
    putc(ch,fp);
   }
   rewind(fp);
   while((ch=getc(fp))!=EOF)
    { 
        putchar(ch);
    }
    fclose(fptr);
    fclose(fp);
}