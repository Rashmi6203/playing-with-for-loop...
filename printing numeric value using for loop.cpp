#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    int i;
    scanf("%d\n%d", &a, &b);
      // Complete the code.
    char* words[]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
  	for(i=a; i<=b ;i++)
{
        if(i>9)
        {
                printf("%s\n", words[(9)+(i%2)]);
        }
        else 
        {
                printf("%s\n", words[i-1]);
        }
}
}
