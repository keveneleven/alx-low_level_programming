/**
 * main - entry point
 * @argc: argument count
 * @argv: argument variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
        int fd, m;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	struct stat file_stat;
	if (fstat(fd, &file_stat) == -1)
	{
		perror("fstat");
		exit(EXIT_FAILURE);
	}
	void *file_mem = mmap(NULL, file_stat.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
	if (file_mem == MAP_FAILED)
	{
		perror("mmap");
		exit(EXIT_FAILURE);
	}
	Elf64_Ehdr *elf_hdr = (Elf64_Ehdr *) file_mem;
	if (!is_elf_file(elf_hdr))
	{
		fprintf(stderr, "%s is not an ELF file\n", argv[1]);
		munmap(file_mem, file_stat.st_size);
		close(fd);
		exit(EXIT_FAILURE);
	}
	if (elf_hdr->e_ident[EI_CLASS] != ELFCLASS64)
	{
		fprintf(stderr, "%s is not a 64-bit ELF file\n", argv[1]);
		munmap(file_mem, file_stat.st_size);
		close(fd);
		exit(EXIT_FAILURE);
	}
	printf("ELF file: %s\n", argv[1]);
	printf("Magic: ");
	for (m = 0; m < EI_NIDENT; ++m)
		printf("%02x ", elf_hdr->e_ident[i]);
	printf("\n");
	print_elf_type(elf_hdr->e_type);
	print_elf_machine(elf_hdr->e_machine);
	printf("Entry point address: 0x%lx\n", elf_hdr->e_entry);
	munmap(file_mem, file_stat.st_size);
	close(fd);
	return (0);
}
