#include <stdio.h>
#include<string.h>
int main() { 
  char a[]={"sheehs"};
  int i=0,j=strlen(a)-1;
    int count=0;
    while(i<j)
    {
        if(a[i]!=a[j])
        {   
            count++;
        }
        i++;
        j--;
    }
    if(count==0)
      printf("Palindrom");
    else
     printf("not palindrom");
    return 0;
}
