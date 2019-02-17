//#include <stdio.h>

int pointeri_char1()
{
	int num;
	int *numPtr;
	int num2;
	num = 100;
	numPtr = &num;  // addres of num   *= dereferentiere, or inderection operator
	num2 = *numPtr;
	
//	printf("num = %d, numPtr = %d, addresOfNum = %d, num2 = %d,\n", num, numPtr, &num, num2);

	char str1[] = "Hello World";
	printf("String = %s; %c; &str1 = %d; &str1[0] = %d; str1 = %d;\n", str1, str1[0], &str1, &str1[0], str1 );
	
	printf("\n");
	char str2[] = "Hello";
	char *str3 = "Bye";
	printf("%s; %x  %x;\n", str2, str2, &str2);
	printf("%s; %x  %x;\n", str3, str3, &str3);
	printf("%x; %x  %x;\n", &str3[0], &str3[1], &*(str3+2));
	
	printf("\n");
	str3 = &str2[0];
	printf("%s; %x  %x;\n", str2, str2, &str2);
	printf("%s; %x  %x;\n", str3, str3, &str3);
	
	
	int data[10];
	data[0] = 12;
	data[1] = 14;
	
	printf("\n");
	printf("data[0] = %x\n", &data[0]);
	printf("data = %x\n", data);
	printf("data = %x\n", &data);
	
	return 0;
	
}
