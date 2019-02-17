//#include <stdio.h>

#define LEN 3

int pointeri_char()
{
	int i;
	char *pc;
	char **ppc;
	
	char*  words[LEN];
	char words2[LEN];
	
	words[0] = "zero";
	words[1] = "one";
	words[2] = "two";	
	
	words2[0] = 'Z';

	
	ppc = words;
	pc = *ppc;
//	printf("%d\n", ppc);
//	printf("%d\n", *ppc);
//	printf("%d\n", pc);
//	printf("%d\n", words);
//	printf("%d\n", words[0]);
		
	for (i = 0; i < LEN; i++) {
		ppc = words + i;
		pc = *ppc;
		while (*pc != 0) {
			printf("%c ", *pc);
			pc += 1;
		}
		printf("\n");
	}
	
	
	return 0;
}
