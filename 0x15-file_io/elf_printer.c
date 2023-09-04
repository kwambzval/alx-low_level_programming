#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include "main.h"

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

