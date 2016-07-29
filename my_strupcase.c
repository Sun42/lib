#define NULL (void *)0
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/* Attention si plus de 16 char ca plante*/
int     	my_strlen(char *str);
char	*my_strupcase(char *str);

int main()
 {
	 char *s1;
	 s1 =strcpy(s1,"SaLuz 't ouf?");
	 printf("%s\n",s1);
    my_strupcase(s1);
     printf("%s\n",s1);
	return (0);
 }

char	*my_strupcase(char *str)
{
    int i;
printf("my_strlen(str) :%i \n",my_strlen(str));
    i = 0;
   int lenght;
   lenght = my_strlen(str);
    while (i<lenght)
    {
     if (( str[i] >= 'a') && (str[i]<='z'))
        {
           str[i] = str[i]-32;

        }
        i = i + 1;
    }

    str[i] = '\0';
    return(str);
}

int     my_strlen(char *str)
{
  int count;

  count = 0;
  while (*str++)
    {
      count++;
    }
  return (count);
}
