#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*my_strncpy(char *dest, char *src, int n);
void     	my_putchar(char c);
int     	my_strlen(char *str);

 int main()
 {
	 char *dest;
	 char *src;

    src="toto";
	 printf("Dest avec strcopy :%s\n", strncpy(dest,src,1));
	printf("Dest avec mystrcopy :%s\n",  my_strncpy(dest,src,1));
	return (0);
 }

 char	*my_strncpy(char *dest, char *src, int n)
 {
	 int 	i;
	 int lenght;

	 i = 0;
	 lenght = strlen(src);
	 while(i < n)
	 {
	     if(i >= lenght)
	     {
	         *(dest + i) = '\0';
	     }
	     else
            {
                *(dest + i) = src[i];
            }
		 i = i + 1;
	 }

	 return(dest);
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

void     my_putchar(char c)
{
  write(1, &c, 1);
}
