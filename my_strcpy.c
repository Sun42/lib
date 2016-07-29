#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*my_strcpy(char *dest, char *src);
void     	my_putchar(char c);
int     	my_strlen(char *str);

 int main()
 {
	 char *dest;
     char * src;

    src ="binjour";
	 printf("Dest avec strcopy :%s\n", strcpy(dest,src));
	printf("Dest avec mystrcopy :%s\n",  my_strcpy(dest,src));
	return (0);
 }

 char	*my_strcpy(char *dest, char *src)
 {
     int 	i;
     int lenght;

    i = 0;
    lenght = my_strlen(src);
	 while(i <= lenght)
	 {
		 *(dest + i) = src[i];
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
