#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

#define EI_NIDENT 16

typedef struct{
	unsigned char e_ident[EI_NIDENT];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;
/**
 * print_elf_header - to print elf header
 * @header: the header to print
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int m;

	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (m = 0; m < EI_NIDENT; m++)
		printf("%02x ", header->e_ident[i]);
}
	printf("\n");
	printf("  Class:                             ");
	switch (header->e_ident[4]){
		case 0: printf("Invalid class\n"); break;
		case 1: printf("ELF32\n"); break;
		case 2: printf("ELF64\n"); break;
		default: printf("<unknown>\n");
	}
	printf("  Data:                              ");
	switch (header->e_ident[5]){
        	case 0: printf("Invalid data encoding\n"); break;
        	case 1: printf("2's complement, little endian\n"); break;
        	case 2: printf("2's complement, big endian\n"); break;
        	default: printf("<unknown>\n");
	}
	printf("  Version:                           ");
	switch (header->e_ident[6]){
		case 0: printf("Invalid version\n"); break;
		case 1: printf("Current version\n"); break;
		default: printf("<unknown>\n");
	}
	printf("  OS/ABI:                            ");
	switch (header->e_ident[7]){
		case 0: printf("UNIX - System V\n"); break;
		case 2: printf("UNIX - NetBSD\n"); break;
		case 6: printf("UNIX - Solaris\n"); break;
		default: printf("<unknown>\n");
	}
	printf("  Type:                              ");
	switch (header->e_type){
		case 0: printf("NONE (No file type)\n"); break;
		case 1: printf("REL (Relocatable file)\n"); break;
		case 2: printf("EXEC (Executable file)\n"); break;
		case 3: printf("DYN (Shared object file)\n"); break;
		case 4: printf("CORE (Core file)\n"); break;
		default: printf("<unknown>\n");
	}
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}
