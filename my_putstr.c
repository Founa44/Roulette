/*
** my_putstr.c for my_putstr in /home/founauser/S02/Jour3/my_putstr
** 
** Made by Founa Ben Chaabane
** Login   <bencha_f@etna-alternance.net>
** 
** Started on  Wed Mar 21 09:41:00 2018 Founa Ben Chaabane
** Last update Thu Mar 22 20:39:55 2018 Founa Ben Chaabane
*/

int	my_strlen(char *str);
void	my_putchar(char);

void	my_putstr(char *str)
{
  char	*p;
  int	i;

  p = str;
  i = 0;
  while (*(p + i) != '\0')
    {
      my_putchar(*(p + i));
      i++;
    }
}
