/* if annidate */
#include <stdio.h>

int main()
{
   int test1=1,test2=2;
   if(test1==1)
       if(test2==2)
           printf("I test sono verificati\n");
        else
            printf("Test2 non e' verificato\n");
   else
        printf("Test1 non e' verificato\n");

   return 0;
}
