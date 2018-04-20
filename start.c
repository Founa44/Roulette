/*
** start.c for start in /home/founauser/S02/Roulette
** 
** Made by Founa Ben Chaabane
** Login   <bencha_f@etna-alternance.net>
** 
** Started on  Thu Mar 22 19:06:13 2018 Founa Ben Chaabane
** Last update Thu Mar 22 20:43:26 2018 Founa Ben Chaabane
*/

int	my_getnbr(char *str);

void	my_putstr(char *str);

void	my_put_nbr(int);

void	random(int *i);

char	*readLine();

void	start(int nb_tour, int *solde, int *mise, int *nbr)
{
  int	i;
  int	l_mise;
  int	l_nbr;

  my_putstr("\033[H\033[2J");
  i = -1;
  my_putstr("\n \n----WELCOME----\nNous allons commencer la partie  ");
  my_put_nbr(nb_tour);
  while (i < 0)
    {
      my_putstr("\nQuel est le montant de votre mise ?\n");
      l_mise = my_getnbr(readLine());
      if (l_mise <= *solde)
	i = -i;
      else
	{
	  my_putstr("Votre mise est supérieur à votre solde.");
	  my_putstr("Recommençons?\n");
	}
    }
  *mise = l_mise;
  i = -1;
  while (i < 0)
    {
      my_putstr("choisissez un numéro compris entre 1 et 36 ?\n");
      l_nbr = my_getnbr(readLine());
      if ((l_nbr >= 1) && (l_nbr <=36))
	i = -i;
      else
	{
	  my_putstr("le numéro n'est pas compris entre 1 et 36.");
	  my_putstr("Recommençons");
	}
    }
  *nbr = l_nbr;
}
