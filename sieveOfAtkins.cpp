#include <bits/stdc++.h>
using namespace std;
void SieveOfAtkin(long long int limit)
{
	if (limit > 2)
		cout << 2 << " ";
	if (limit > 3)
		cout << 3 << " ";
	bool sieve[limit+1];
	for (int i = 0; i <= limit; i++)
		sieve[i] = false;
	/* Mark sieve[n] is true if one
	of the following is true:
	a) n = (4*x*x)+(y*y) has odd number of
	solutions, i.e., there exist
	odd number of distinct pairs (x, y)
	that satisfy the equation and
		n % 12 = 1 or n % 12 = 5.
	b) n = (3*x*x)+(y*y) has odd number of
	solutions and n % 12 = 7
	c) n = (3*x*x)-(y*y) has odd number of
	solutions, x > y and n % 12 = 11 */
	for (int x = 1; x * x <= limit; x++) {
		for (int y = 1; y * y <= limit; y++) {
			int n = (4 * x * x) + (y * y);
			if (n <= limit && (n % 12 == 1 || n % 12 == 5))
				sieve[n] ^= true;

			n = (3 * x * x) + (y * y);
			if (n <= limit && n % 12 == 7)
				sieve[n] ^= true;

			n = (3 * x * x) - (y * y);
			if (x > y && n <= limit && n % 12 == 11)
				sieve[n] ^= true;
		}
	}
	for (int r = 5; r * r <= limit; r++) {
		if (sieve[r]) {
			for (int i = r * r; i <= limit; i += r * r)
				sieve[i] = false;
		}
	}
	for (int a = 5; a <= limit; a++)
		if (sieve[a])
			cout << a << " ";
}
int main(void)
{
	long long int limit = 4999999937;
	SieveOfAtkin(limit);
	return 0;
}