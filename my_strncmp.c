#include <stdio.h>
#include <string.h>
#include <unistd.h>

int     	my_strlen(char *str);
int my_max_int(int i1, int i2);
int my_max_chr(char c1, char c2);
int my_cmp_char(char c1, char c2);
int    my_strcmp(char *s1, char *s2, int n);

int main()
 {
	 char *s1;
	 char *s2;

   s1="toto";
   s2="toto";
   printf("strncmp :%i\n", strncmp(s1,s2,12));
   printf("mystrncmp :%i\n",  my_strncmp(s1,s2,12));
	return (0);
 }

 int    my_strncmp(char *s1, char *s2,int n)
 {
     int i;
     int lenght;

     i = 0;
     lenght = my_max_int(my_strlen(s1),my_strlen(s2));

     while ((i < lenght - 1) && (*(s1 + i) == *(s2 + i))&& (i < (n - 1)))
     {
        i = i + 1;
     }
     return(my_cmp_char(*(s1 + i),*(s2 + i)));
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

int my_max_chr(char c1, char c2)
{
    if (c2 > c1)
        return(c2);
    else
        return(c1);
}

int my_max_int(int i1, int i2)
{

    if (i2 > i1)
        return(i2);
    else
        return(i1);
}

int my_cmp_char(char c1, char c2)
{
    if (c1> c2)
        return (1);
    if(c1 < c2)
        return (-1);
    if (c1 == c2)
        return (0);
}
