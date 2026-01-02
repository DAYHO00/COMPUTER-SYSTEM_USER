
/*
 * addNumber(set, x): Add 'x' to the bitset represented in array 'set'
 *   Assume that 0 <= x <= 127 and 'set' is a pointer to 16-byte array
 */

void addNumber(unsigned char* set, int x) {
  int index=x/8;
  int bit=x%8;
  set[index]|=1<<(7-bit);
}
