// Write a function to count words in a given string
#include<stdio.h>
#include<string.h>
char* strRev(char []);
char* rWords(char[]);
int main()
{
    char str[100];
    printf("Enter String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    rWords(str);
    printf("%s",str);
    return 0;
}
char* rWords(char str[])
{
    char tmp[100];
    int i,j,k=0;
    strcpy(str,strRev(str));
    str[(strlen(str)+1)]='z';
     str[(strlen(str)+2)]='\0';
    str[strlen(str)]=32;
   

  for ( i = 0;str[i]; i++)
  {
     if(str[i]==32 && (str[i+1]>='a' && str[i+1]<='z' || str[i+1]>='A' && str[i+1]<='Z') && i>0)
      {
           j=i;
          while (j)
          {
             j--;
             if((str[j]>='a' && str[j]<='z' || str[j]>='A' && str[j]<='Z'))
             {  
                
                tmp[k]=str[j];
                k++;
             }
             else if(str[j]==-1)
             {
                tmp[j]=32;
             }
             if(str[j]==32)
             break;
          }

          tmp[i]=str[i];
          k=i+1;
      }
      else if(str[i]==32 && str[i+1]==32)str[i]=-1;
      
  }
   tmp[k-1]='\0';
   strcpy(str,tmp);
   return str;
}
//In linux strrev is not working
char* strRev(char str[])
{
   int i,j=strlen(str);
   char tmp[100];
   for ( i = 0;str[i]; i++)
   {
    j--;
    tmp[i]=str[j];
   }
    for ( i = 0;str[i]; i++)str[i]=tmp[i];
   return str;
}