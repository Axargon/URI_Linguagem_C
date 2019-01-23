#include <stdio.h>
#include <math.h>


int main()
{

  unsigned int a,b;
  int i;

    while (scanf("%u%u",&a,&b)!=EOF)
    {
        unsigned int res=0;
        for (i=0;i<32;i++){
            if((a%2) !=b%2 ) res+=pow(2,(i));
           a=a/2;
           b=b/2;        
        }
         printf("%u\n",res);
    }
    
 return 0;    
}
