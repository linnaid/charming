#include<stdio.h>
#include<string.h>

char* string_in(char *s1,char *s2)
{
    int sz = strlen(s1);
    int sz2 = strlen(s2);
    char* n = NULL;
    int t=0;
    for(int i = 0; i < sz; i++)
    {
        if(*(s1+i) == *s2)
        {
            t = 0;
              for(int j = 0; j < sz2; j++)
              {
                if(*(s2+j) != '\0')
                {
                    if(*(s1+j+i) == *(s2+j))
                    t++;
                }
              }
              if(t == sz2)
              {
                //printf("%d ",t);
                return s1+i;
              }
        }
          //printf("%d  ",t);
    }
    return NULL;
}

int main()
{
    char s1[1000],s2[10000];
    scanf("%s %s",s1,s2);
    char* n = string_in(s1,s2);
    printf("%p",n);
    return 0;
}