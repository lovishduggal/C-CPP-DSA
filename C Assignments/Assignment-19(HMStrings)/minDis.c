// Given a list of words followed by two words, the task is to find the minimum distance
// between the given two words in the list of words.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char str[5][20]={"the","slow","brown","man","quick"};
   char word_1[]="the";
   char word_2[]="quick";
   int index_1=-1,index_2=-1,i,result;
   for ( i = 0; i < 5; i++)
   {
        if(strcmp(str[i],word_1)==0) 
         index_1=i;
        

        if(strcmp(str[i],word_2)==0)
         index_2=i;
   }

   if(index_1 !=-1 && index_2 !=-1)
   {
      result=abs(index_1-index_2);
      printf("The minimun Distance is %d",result-1);
   }
   

}