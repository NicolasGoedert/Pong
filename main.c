/*
** main.c for main in /home/nicolas94200/101pong
** 
** Made by goedert nicolas
** Login   <nicolas94200@epitech.net>
** 
** Started on  Mon Nov 14 15:14:34 2016 goedert nicolas
** Last update Mon Nov 14 15:14:35 2016 goedert nicolas
*/

#include "include/my.h"

int     main(int ac, char **av)
{
  if (ac == 8)
    {
      my_101pong(atof(av[1]), atof(av[2]), atof(av[3]), atof(av[4]), atof(av[5]), atof(av[6]), atof(av[7]));
    }
  else
    {
      my_str_error("Not enough or too many arguments\n");
      return (84);
    }
  return (0);
}
