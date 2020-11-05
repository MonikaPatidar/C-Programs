#include <stdio.h>
void main()
{
   int flag_var, i, j;

   for(i=2; i<300; ++i)
   {
      flag_var=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            flag_var=1;
            break;
         }
      }
      if(flag_var==0)
         printf("%d\n",i);
  }
  return 0;
}
