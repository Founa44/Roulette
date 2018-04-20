/*
** play.c for play in /home/founauser/S02/Roulette
** 
** Made by Founa Ben Chaabane
** Login   <bencha_f@etna-alternance.net>
** 
** Started on  Thu Mar 22 19:40:16 2018 Founa Ben Chaabane
** Last update Thu Mar 22 20:54:20 2018 Founa Ben Chaabane
*/
void	my_putstr(char *str);

void	play(int nbr, int rand, int mise, int *solde)
{
  if (nbr == rand)
    {
      mise = mise * 3;
      my_putstr("BRAVO !! vous avez triplez votre mise\n");
    }
  else if ( (nbr % 2) == (rand % 2))
    {
      mise = mise / 2;
      my_putstr ("Bravo ! Vous avez la même couleur.");
      my_putstr(" Vous gagnez la moitié de votre mise\n");
    }
  else
    {
      my_putstr("Pas de chance!\n");
      mise = 0;
    }
  *solde = *solde + mise;
}
