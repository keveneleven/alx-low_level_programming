Elf Task
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_add - prints the address
 * @mag: magic.
 */
void print_add(char *mag)
{
	int m;
	int start;
	char met;

	printf("  Entry point address:               0x");

	met = mag[4] + '0';
	if (met == '1')
	{
		start = 26;
		printf("80");
		for (m = start; m >= 22; m--)
		{
			if (mag[m] > 0)
				printf("%x", mag[m]);
			else if (mag[m] < 0)
				printf("%x", 256 + mag[m]);
		}
		if (mag[7] == 6)
			printf("00");
	}

	if (met == '2')
	{
		start = 26;
		for (m = start; m > 24; m--)
		{
			if (mag[m] >= 0)
				printf("%02x", mag[m]);

			else if (mag[m] < 0)
				printf("%02x", 256 + mag[m]);

		}
	}
	printf("\n");
}
/**
 * print_kind - prints type
 * @mag: magic.
 */
void print_kind(char *mag)
{
	char kind = mag[16];

	if (mag[5] == 1)
		kind = mag[16];
	else
		kind = mag[17];

	printf("  Type:                              ");
	if (kind == 0)
		printf("None (No file type)\n");
	else if (kind == 1)
		printf("Rel (Relocatable file)\n");
	else if (kind == 2)
		printf("Exe (Executable file)\n");
	else if (kind == 3)
		printf("Dyn (Shared object file)\n");
	else if (kind == 4)
		printf("Core (Core file)\n");
	else
		printf("<Unknown: %x>\n", kind);
}
/**
 * print_osabi - prints osabi
 * @mag: magic.
 */
void print_osabi(char *mag)
{
	char osabi = mag[7];

	printf("  OS/ABI:                            ");
	if (osabi == 0)
		printf("UNIX - System V\n");
	else if (osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (osabi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osabi);

	printf("  ABI Version:                       %d\n", mag[8]);
}
/**
 * print_form - prints version
 * @mag: magic.
 */
void print_form(char *mag)
{
	int form = mag[6];

	printf("  Version:                           %d", form);

	if (form == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * print_info - prints data
 * @mag: magic.
 */
void print_info(char *mag)
{
	char info = mag[5];

	printf("  Data:                              2's complement");
	if (info == 1)
		printf(", little endian\n");

	if (info == 2)
		printf(", big endian\n");
}
/**
 * print_magic - prints magic info.
 * @mag: magic.
 */
void print_magic(char *mag)
{
	int bytes;

	printf("  Magic:  ");

	for (bytes = 0; bytes < 16; bytes++)
		printf(" %02x", mag[bytes]);

	printf("\n");

}
/**
 * check_met - check the version system.
 * @mag: magic.
 */
void check_met(char *mag)
{
	char met = mag[4] + '0';

	if (met == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(mag);

	if (met == '1')
		printf("  Class:                             ELF32\n");

	if (met == '2')
		printf("  Class:                             ELF64\n");

	print_info(mag);
	print_form(mag);
	print_osabi(mag);
	print_kind(mag);
	print_add(mag);
}

/**
 * check_elf - check if it is an elf file.
 * @mag: magic.
 * Return: 1 if it is an elf file. 0 if not.
 */
int check_elf(char *mag)
{
	int add = (int)mag[0];
	char E = mag[1];
	char L = mag[2];
	char F = mag[3];

	if (add == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}
/**
 * main - check the code
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd, giv_read;
	char mag[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);
	giv_read = read(fd, mag, 27);

	if (giv_read == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!check_elf(mag))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	check_met(mag);
	close(fd);

	return (0);
}
