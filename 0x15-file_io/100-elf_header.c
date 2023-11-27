#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>
#include "main.h"

/**
 * print_elf_header - Prints the ELF header information.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	char *magic = "Magic: ";
	int i;

	while (*magic)
		_putchar(*magic++);

	for (i = 0; i < EI_NIDENT; i++)
	{
		_putchar(header->e_ident[i]);
		_putchar(' ');
	}
	_putchar('\n');

	/* Repeat this process for the other fields... */
}

/**
 * main - Main function to read ELF file and print header info.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr *header;

	if (argc != 2)
	{
		write(2, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error opening file\n", 19);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		write(2, "Error allocating memory\n", 24);
		exit(98);
	}

	if (read(fd, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		write(2, "Error reading ELF header\n", 24);
		exit(98);
	}

	if (header->e_ident[EI_MAG0] != ELFMAG0 || header->e_ident[EI_MAG1] != ELFMAG1 ||
		header->e_ident[EI_MAG2] != ELFMAG2 || header->e_ident[EI_MAG3] != ELFMAG3)
	{
		write(2, "Not an ELF file\n", 16);
		exit(98);
	}

	print_elf_header(header);

	free(header);
	close(fd);
	return (0);
}

