#include <unistd.h>

/**
 * main- print exactly "and that piece of art is useful"
 * - Dora korpar, 2015-10-19,
 * followed by a new line,to the standard error.
 * Return always 0 (success)
 */
int main(void)
{
        char str1[]="and that piece of art is useful\" - Dora, 2015-10-19\n";

        write(2, str1, 59);
	return (1);
}
