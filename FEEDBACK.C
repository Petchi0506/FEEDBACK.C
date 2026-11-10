#include<stdio.h>
int main()
{
 char ch;
 FILE*fp;
 fp=fopen("feedback.txt","w");
  if(fp==NULL)
   {
    printf("file opening failed\n");
    return 0;
   }
 fprintf(fp,"feedback about c programming\n");
 fprintf(fp,"1.C language is a usefull language\n");
 fprintf(fp,"2.C language is easy but little difficult to learn\n");
 fprintf(fp,"3.C is basic language to all other languages\n");
 fprintf(fp,"4.C is a high level language\n");
 fprintf(fp,"5.C helps us to improve our logic sense\n");
 fclose(fp);
 fp=fopen("feedback.txt","a");
  if(fp==NULL)
   {
    printf("file opening failed\n");
    return 0;
   }
 fprintf(fp,"feedback about the C-Sir\n");
 fprintf(fp,"1.C sir is supportive\n");
 fprintf(fp,"2.His teaching is good\n");
 fprintf(fp,"3.C sir dosen't get angry even when we did something wrong\n");
 fclose(fp);
 fp=fopen("feedback.txt","r");
  if(fp==NULL)
   {
    printf("file opening failed\n");
    return 0;
   }
 while((ch=fgetc(fp))!=EOF)
  {
   printf("%c",ch);
  }
 fclose(fp);
 return 0;
}