#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t rd, wr;
	char *bf;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	bf = malloc(sizeof(char) * (letters));
	if (!bf)
		return (0);

	rd = read(f, bf, letters);
	wr = write(STDOUT_FILENO, bf, rd);

	close(f);

	free(bf);

	return (wr);
}
