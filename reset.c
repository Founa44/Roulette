/*
** reset.c for reset in /home/founauser/S02/Roulette
** 
** Made by Founa Ben Chaabane
** Login   <bencha_f@etna-alternance.net>
** 
** Started on  Thu Mar 22 19:53:14 2018 Founa Ben Chaabane
** Last update Thu Mar 22 20:40:48 2018 Founa Ben Chaabane
*/

void	my_putstr(char *str);

void	my_put_nbr(int n);

char	*readLine();

void	reset(int *solde, char *replay)
{
  char	rep;
  
  my_putstr(" Votre solde est : ");
  my_put_nbr(*solde);
  my_putstr("\n Voulez vous rejouer ? (Y/N)");
  rep = readLine()[0];
  *replay = rep;
}
