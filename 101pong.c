/*
** 101pong.c for 101pong in /home/nicolas94200/101pong
** 
** Made by goedert nicolas
** Login   <nicolas94200@epitech.net>
** 
** Started on  Mon Nov 14 15:17:18 2016 goedert nicolas
** Last update Mon Nov 14 15:17:23 2016 goedert nicolas
*/

#include "include/my.h"
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int	my_101pong(float x, float y, float z, float x2, float y2, float z2, int n)
{
  float	a;
  float b;
  float c;
  float d;
  float e;
  float f;
  float i;
  float j;
  float k;
  float angle;
  float res;
  float cos;

  a = x2 - x;
  b = y2 - y;
  c = z2 - z;
  d = n * a;
  e = n * b;
  f = n * c;
  i = x2 + d;
  j = y2 + e;
  k = z2 + f;
  printf("The speed vector coordinates are :\n(%.2f;%.2f;%.2f)\n", a, b, c);
  printf("At time t+%d, ball coordinares will be :\n(%.2f;%.2f;%.2f)\n", n, i, j, k);
  if (x >= 0)
    {
      if (a < 0)
	{
	  cos = (pow(c, 2)) / (c * (sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2))));
	  if (cos < 0)
	    cos = cos * -1;
	  res = acos(cos);
	  res = (res * 180) / M_PI;
	  angle = 90 - res;
	  printf("The incidence angle is :\n%.2f degrees\n", angle);
	}
      else
	printf("The ball won't reach the bat.\n");
    }
  return (0);
}
