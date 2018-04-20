/*
** random.c for random in /home/founauser/S02/Roulette
** 
** Made by Founa Ben Chaabane
** Login   <bencha_f@etna-alternance.net>
** 
** Started on  Thu Mar 22 18:40:04 2018 Founa Ben Chaabane
** Last update Thu Mar 22 20:40:27 2018 Founa Ben Chaabane
*/

#include <stdlib.h>
#include <time.h>

void	my_random(int *r)
{
  srand (time (NULL));
 *r = (rand()% 36) + 1;
}
