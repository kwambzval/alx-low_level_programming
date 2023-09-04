#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include "main.h"
#include <string.h>
/**
 * error_exit - Exits the program with an error message.
 * @message: The error message to print.
 */
void error_exit(const char *message)
{
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(98);
}

/**
 * print_magic - Prints the ELF magic number.
 * @header: Pointer to the ELF header.
 */
void print_magic(Elf64_Ehdr *header)
{
    int i;

    printf("  %-20s:", "Magic");
    for (i = 0; i < EI_NIDENT; i++)
        printf(" %02x", header->e_ident[i]);
    printf("\n");
}

/**
 * print_elf_class - Prints the ELF class (32-bit or 64-bit).
 * @header: Pointer to the ELF header.
 */
void print_elf_class(Elf64_Ehdr *header)
{
    printf("  %-20s: %s\n", "Class",
           (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
}

/**
 * print_elf_data - Prints the ELF data encoding (little or big endian).
 * @header: Pointer to the ELF header.
 */
void print_elf_data(Elf64_Ehdr *header)
{
    printf("  %-20s: %s\n", "Data",
           (header->e_ident[EI_DATA] == ELFDATA2LSB)
           ? "2's complement, little endian" : "2's complement, big endian");
}

/**
 * print_elf_version - Prints the ELF version.
 * @header: Pointer to the ELF header.
 */
void print_elf_version(Elf64_Ehdr *header)
{
    printf("  %-20s: %d (current)\n", "Version", header->e_ident[EI_VERSION]);
}

/**
 * main - Entry point of the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr elf_header;
    if (argc != 2)
    {
        error_exit("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);

    if (fd == -1)
    {
        error_exit("Error: Cannot open file");
    }

    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
    {
        error_exit("Error: Cannot read ELF header");
    }

    if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
    {
        error_exit("Error: Not an ELF file");
    }

    printf("ELF Header:\n");

    print_magic(&elf_header);
    print_elf_class(&elf_header);
    print_elf_data(&elf_header);
    print_elf_version(&elf_header);

    close(fd);
    return (0);
}

