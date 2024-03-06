
static int seed;

void my_srnad(int s)
{
	seed = s;
	

}

int my_rand(void)
{

	seed = seed * 1103515245 + 12345;		// man 3 rand_examples
    return((unsigned)(seed/65536) % 32768);

}
