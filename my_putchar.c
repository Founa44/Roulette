/*
** my_putchar.c for my_putchar in /home/founauser/Jour01/bencha_f/my_putchar
** 
** Made by Founa Ben Chaabane
** Login   <bencha_f@etna-alternance.net>
** 
** Started on  Mon Mar 19 14:28:36 2018 Founa Ben Chaabane
** Last update Thu Mar 22 20:39:13 2018 Founa Ben Chaabane
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
