#include "main.h"
#include  <stdlib.h>
/* read_textfile -  reads a text file and prints it to the POSIX standard output.
 * @filename: the name of the file to read.
 * @letters: the numbers to read and print.
 *
 * Return: The actual number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t ff;
	ssize_t k;
	ssize_t m;

	ff = open(filename, O_RDONLY);
	if (ff == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	m = read(ff, buf, letters);
	k = write(STDOUT_FILENO, buf, m);

	free(buf);
	close(ff);
	return (k);
}
