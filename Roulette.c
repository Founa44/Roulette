/*
** Roulette.c for Roulette in /home/founauser/S02/Roulette
** 
** Made by Founa Ben Chaabane
** Login   <bencha_f@etna-alternance.net>
** 
** Started on  Thu Mar 22 18:17:03 2018 Founa Ben Chaabane
** Last update Thu Mar 22 20:38:36 2018 Founa Ben Chaabane
*/

void	start(int nb_tour, int *solde, int *mise, int *nbr);

void	play(int nbr, int rand, int mise, int *solde);

void	reset(int *solde, char *replay);

void	random(int *r);

void	Roulette()
{
  int	solde;
  char	replay;
  int	mise;
  int	nb_tour;
  int	nbr;
  int	r;
  
  replay = 'y';
  solde = 200;
  nb_tour = 1;
  while ((replay == 'y') || (replay == 'Y'))
    {
      start(nb_tour, &solde, &mise, &nbr);
      solde = solde - mise;
      random(&r);
      play(nbr, r, mise, &solde);
      reset(&solde, &replay);
      nb_tour++;
    }
}
