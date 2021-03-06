#include "../sieve.h"

int main(int argc, char** argv) {
	if (argc != 2) {
		printf("\nIncorrect number of command line arguments"
				"\nUsage: ./a.out <size_of_input>"
				"\nExiting...\n");
		return 0;
	}

	int limit = atoi(argv[1]);
	sieve_t sieve;
	
	init_sieve(&sieve, limit);
	eratosthenes_find_primes(&sieve, limit);
	print_as_list(sieve, limit);
	uninit_sieve(&sieve);

	return 0;
}
