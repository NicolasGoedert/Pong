/*
** my_fct.c for fact in /home/nicolas94200/101pong
** 
** Made by goedert nicolas
** Login   <nicolas94200@epitech.net>
** 
** Started on  Mon Nov 14 15:16:49 2016 goedert nicolas
** Last update Mon Nov 14 15:16:50 2016 goedert nicolas
*/

#include "include/my.h"

void	my_puterror(char c)
{
  write(2, &c, 1);
}

int	my_str_error(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_puterror(str[i]);
      i = i + 1;
    }
  return (0);
}
