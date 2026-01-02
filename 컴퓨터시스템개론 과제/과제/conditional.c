#include "conditional.h"

/*
 * conditional(x, y, z): same as x ? y : z
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 */
int conditional(int x, int y, int z) {
  x=x|(x<<16);
  x=x|(x<<8);
  x=x|(x<<4);
  x=x|(x<<2);
  x=x|(x<<1);
  x=x >>31;
  return (x&y)|(~x & z);
}
