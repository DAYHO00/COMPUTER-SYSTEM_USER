#include "copyLSB.h"

int copyLSB(int x) {
	int mask = ((x & 1) << 31) >> 31;
	return (mask | x);
}