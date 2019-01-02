// This file is for testing only.

#define KGRN  "\x1B[32m" //Make text Green.
#define KRED  "\x1B[31m" //Red
#define KCYN  "\x1B[36m" //Cyan

#include "../libft/libft.h" //My libft header file.
#include <stdio.h> //Printf for testing.
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <limits.h>
int main(void)
{
setbuf(stdout, NULL); // set all writes to stdout to be unbuffered. This helps keep the printfs in correct order.

printf("\n%s ======================Part 1 Function TESTS====================== %s", KCYN, KGRN);
printf("\n\n=====Testing 1 - ft_memset=====");
	char memset_str1[] = "Hello world";
	char memset_str2[] = "Hello world";
	printf("\n		LIBC: %s", memset(memset_str1, 'A', 8));
	printf("\n 		MINE: %s", ft_memset(memset_str2, 'A', 8));

printf("\n\n=====Testing 2 - ft_bzero=====");
	char ft_bzero_str1[] = "My names Jeff";
	char ft_bzero_str2[] = "My names Jeff";
	bzero(ft_bzero_str1, 4);
	ft_bzero(ft_bzero_str2, 4);
	printf("\n		LIBC: %s", ft_bzero_str1);
	printf("\n 		MINE: %s", ft_bzero_str2);
	
	//If n is zero, bzero() does nothing. (String is unaltered)
	char ft_bzero_str3[] = "My names Jeff";
	char ft_bzero_str4[] = "My names Jeff";
	bzero(ft_bzero_str3, 0);
	ft_bzero(ft_bzero_str4, 0);
	printf("\n		LIBC: %s", ft_bzero_str3);
	printf("\n 		MINE: %s", ft_bzero_str4);

printf("\n\n=====Testing 3 - ft_memcpy=====");
	char ft_memcpy_str1src[] = "Supercalifragilisticexpialidocious";
	char ft_memcpy_str2dest[] = "SomeOtherReallyLongNonsense";
	memcpy(ft_memcpy_str2dest, ft_memcpy_str1src, 5);
	char ft_memcpy_str3src[] = "Supercalifragilisticexpialidocious";
	char ft_memcpy_str4dest[] = "SomeOtherReallyLongNonsense";
	ft_memcpy(ft_memcpy_str4dest, ft_memcpy_str3src, 5);
	printf("\n		LIBC SOURCE: %s", ft_memcpy_str1src);
	printf("\n 		MINE SOURCE: %s", ft_memcpy_str3src);
	printf("\n		LIBC DEST: %s", ft_memcpy_str2dest);
	printf("\n 		MINE DEST: %s", ft_memcpy_str4dest);

	//Libc's memcpy will segfault if you pass it a null, so I think it's correct that mine does too.
	//char *ft_memcpy_str5src = NULL;
	//char ft_memcpy_str6dest[] = "SomeOtherReallyLongNonsense";
	////char *ft_memcpy_str7src = NULL;
	////char ft_memcpy_str8dest[] = "SomeOtherReallyLongNonsense";
	//memcpy(ft_memcpy_str6dest, ft_memcpy_str5src, 5);
	////ft_memcpy(ft_memcpy_str8dest, ft_memcpy_str7src, 5);
	//printf("\n		LIBC SOURCE: %s", ft_memcpy_str5src);
	////printf("\n 		MINE SOURCE: %s", ft_memcpy_str7src);
	//printf("\n		LIBC DEST: %s", ft_memcpy_str6dest);
	////printf("\n 		MINE DEST: %s", ft_memcpy_str8dest);	

printf("\n\n=====Testing 4 - ft_memccpy=====");
	char ft_memccpy_str1src[] = "Supercalifragilisticexpialidocious";
	char ft_memccpy_str2dest[] = "SomeOtherReallyLongNonsense";
	memccpy(ft_memccpy_str2dest, ft_memccpy_str1src, 'p', 5);
	char ft_memccpy_str3src[] = "Supercalifragilisticexpialidocious";
	char ft_memccpy_str4dest[] = "SomeOtherReallyLongNonsense";
	ft_memccpy(ft_memccpy_str4dest, ft_memccpy_str3src, 'p', 5);
	printf("\n		LIBC SOURCE: %s", ft_memccpy_str1src);
	printf("\n 		MINE SOURCE: %s", ft_memccpy_str3src);
	printf("\n		LIBC DEST: %s", ft_memccpy_str2dest);
	printf("\n 		MINE DEST: %s", ft_memccpy_str4dest);

	//Regular memccpy will just throw an error if you try to pass it n that is too large.
	//memccpy(ft_memccpy_str2dest, ft_memccpy_str1src, 'p', 55);

printf("\n\n=====Testing 5 - ft_memmove=====");
	char ft_memmove_src1[16] = "Stumpy is cool!";
	char ft_memmove_src2[16] = "Stumpy is cool!";
	char ft_memmove_dst1[16];
	char ft_memmove_dst2[16];
	printf("\n		LIBC: %s", memmove(ft_memmove_dst1, ft_memmove_src1, 6));
	printf("\n 		MINE: %s", ft_memmove(ft_memmove_dst2, ft_memmove_src2, 6));

	// ====Commenting out because it makes a very long line of A. But it does work with the large string.
	// Keep in mind that even regular libc memmove will seg fault if you run the program several times in a row because 
	//the memory set aside on the stack for the program isn't enough. You will get a Stack Overflow.
	//int		size = 128 * 1024 * 1024;
	//char	*dst = (char *)malloc(sizeof(char) * size);
	//char	*data = (char *)malloc(sizeof(char) * size);

	//memset(data, 'A', size);
	//if (!dst)
	//	printf("JemTest Error in 5 - ft_memmove: dst does not exist.");
	//ft_memmove(dst, data, size);
	//printf("DstTest: %s", dst);
	//====

printf("\n\n=====Testing 6 - ft_memchr=====");
	char ft_memchr_str1[] = "Yellow Butterfly";
	printf("\n 		LIBC: %s", memchr(ft_memchr_str1,'l', 5));
	printf("\n 		MINE: %s", ft_memchr(ft_memchr_str1,'l', 5));

	char ft_memchr_str2[] = "Snap Crackle Pop"; 
	printf("\n 		LIBC: %s", memchr(ft_memchr_str2,'p', 2));
	printf("\n 		MINE: %s", ft_memchr(ft_memchr_str2,'p', 2));

 printf("\n\n=====Testing 7 - ft_memcmp=====");
	char ft_memcmp_str1[] = "Hello";
	char ft_memcmp_str2[] = "Tests";
	printf("\n 		LIBC: %d", memcmp(ft_memcmp_str1, ft_memcmp_str2, 5));
	printf("\n 		MINE: %d", ft_memcmp(ft_memcmp_str1, ft_memcmp_str2, 5));

	char ft_memcmp_str3[] = "Snails";
	char ft_memcmp_str4[] = "Snailz";
	printf("\n 		LIBC: %d", memcmp(ft_memcmp_str3, ft_memcmp_str4, 6));
	printf("\n 		MINE: %d", ft_memcmp(ft_memcmp_str3, ft_memcmp_str4, 6));

	char ft_memcmp_str5[] = "Hellos";
	char ft_memcmp_str6[] = "Hellos";
	printf("\n 		LIBC: %d", memcmp(ft_memcmp_str5, ft_memcmp_str6, 6));
	printf("\n 		MINE: %d", ft_memcmp(ft_memcmp_str5, ft_memcmp_str6, 6));


printf("\n\n=====Testing 8 - ft_strlen=====");
	printf("\n		LIBC: %zu", strlen("HelloWorld"));
	printf("\n 		MINE: %zu", ft_strlen("HelloWorld"));

printf("\n\n=====Testing 9 - ft_strdup=====");
	printf("\n		LIBC: %s", strdup("Stumpy is cool!"));
	printf("\n 		MINE: %s", ft_strdup("Stumpy is cool!"));

printf("\n\n=====Testing 10 - ft_strcpy=====");
	char ft_strcpy_dst[16];
	printf("\n		LIBC: %s", strcpy(ft_strcpy_dst, "Stumpy is cool!"));
	printf("\n 		MINE: %s", ft_strcpy(ft_strcpy_dst, "Stumpy is cool!"));

printf("\n\n=====Testing 11 - ft_strncpy=====");
	char ft_strncpy_dst1[16];
	char ft_strncpy_dst2[16];
	printf("\n		LIBC: %s", strncpy(ft_strncpy_dst1, "Stumpy is cool!", 6));
	printf("\n 		MINE: %s", ft_strncpy(ft_strncpy_dst2, "Stumpy is cool!", 6));

printf("\n\n=====Testing 12 - ft_strcat=====");
	// Libc's strcat doesn't handle memory allocation, so you have to handle that ahead of time.
   	char ft_strcat_str1[50], ft_strcat_str2[50];
   	strcpy(ft_strcat_str1,  "This is source");
   	strcpy(ft_strcat_str2, "This is destination");
	printf("\n		LIBC: %s", strcat(ft_strcat_str1, ft_strcat_str2));
   	char ft_strcat_str3[50], ft_strcat_str4[50];
   	strcpy(ft_strcat_str3,  "This is source");
   	strcpy(ft_strcat_str4, "This is destination");
	printf("\n		MINE: %s", ft_strcat(ft_strcat_str3, ft_strcat_str4));

printf("\n\n=====Testing 13 - ft_strncat=====");
   	char ft_strncat_str1[50], ft_strncat_str2[50];
   	strcpy(ft_strncat_str1,  "This is source");
   	strcpy(ft_strncat_str2, "This is destination");
	printf("\n		LIBC: %s", strncat(ft_strncat_str1, ft_strncat_str2, 4));
	char ft_strncat_str3[50], ft_strncat_str4[50];
   	strcpy(ft_strncat_str3,  "This is source");
   	strcpy(ft_strncat_str4, "This is destination");
	printf("\n		MINE: %s", ft_strncat(ft_strncat_str3, ft_strncat_str4, 4));

printf("\n\n=====Testing 14 - ft_strlcat=====");
	// I have a strlcatPythonTutor.c file with step by step explaination in LibftWorkFiles
	//man: Note that room for the NUL should be included in dstsize.
   	char ft_strlcat_dst1[13] = "Hello";
   	char ft_strlcat_src2[] = "Goodbye";
	printf("\n		LIBC: %zu", strlcat(ft_strlcat_dst1, ft_strlcat_src2, 13));
	char ft_strlcat_dst3[13] = "Hello";
   	char ft_strlcat_src4[] = "Goodbye";
	printf("\n		MINE: %zu", ft_strlcat(ft_strlcat_dst3, ft_strlcat_src4, 13));
	printf("\n		LIBC: %s", ft_strlcat_dst1);
	printf("\n		MINE: %s", ft_strlcat_dst3);

	// when given incorrect dstsize that is shorter than dst, like the man mentions.
	printf("\n");
	char ft_strlcat_dst5[13] = "Hello";
	char ft_strlcat_dst7[13] = "Hello";
   	char ft_strlcat_src6[] = "Goodbye";
   	char ft_strlcat_src8[] = "Goodbye";
   	printf("\n		LIBC: %s", ft_strlcat_dst5);
	printf("\n		MINE: %s", ft_strlcat_dst7);
	printf("\n		LIBC: %zu", strlcat(ft_strlcat_dst5, ft_strlcat_src6, 2));
	printf("\n		MINE: %zu", ft_strlcat(ft_strlcat_dst7, ft_strlcat_src8, 2));
	printf("\n		LIBC: %s", ft_strlcat_dst5);
	printf("\n		MINE: %s", ft_strlcat_dst7);

	printf("\n");
	char ft_strlcat_dst9[13] = "Hello";
	char ft_strlcat_dst10[13] = "Hello";
   	char ft_strlcat_src11[] = "Goodbye";
   	char ft_strlcat_src12[] = "Goodbye";
   	printf("\n		LIBC: %s", ft_strlcat_dst9);
	printf("\n		MINE: %s", ft_strlcat_dst10);
	printf("\n		LIBC: %zu", strlcat(ft_strlcat_dst9, ft_strlcat_src11, 0));
	printf("\n		MINE: %zu", ft_strlcat(ft_strlcat_dst10, ft_strlcat_src12, 0));
	printf("\n		LIBC: %s", ft_strlcat_dst9);
	printf("\n		MINE: %s", ft_strlcat_dst10);

printf("\n\n=====Testing 15 - ft_strchr=====");
	char strchr_str1[] = "Yellow Butterfly";
	printf("\n 		LIBC: %s", strchr(strchr_str1,'l'));
	printf("\n 		MINE: %s", ft_strchr(strchr_str1,'l'));

	char strchr_str2[] = "Snap Crackle Pop"; 
	printf("\n 		LIBC: %s", strchr(strchr_str2,'p'));
	printf("\n 		MINE: %s", ft_strchr(strchr_str2,'p'));

printf("\n\n=====Testing 16 - ft_strrchr=====");
	char strrchr_str1[] = "Yellow Butterfly"; 
	printf("\n 		LIBC: %s", strrchr(strrchr_str1,'l'));
	printf("\n 		MINE: %s", ft_strrchr(strrchr_str1,'l'));

	char strrchr_str2[] = "A string without n"; 
	printf("\n 		LIBC: %s", strrchr(strrchr_str2,'l'));
	printf("\n 		MINE: %s", ft_strrchr(strrchr_str2,'l'));

	char strrchr_str3[] = "l is the first char"; 
	printf("\n 		LIBC: %s", strrchr(strrchr_str3,'l'));
	printf("\n 		MINE: %s", ft_strrchr(strrchr_str3,'l'));

	char strrchr_str4[] = "the last char is l";
	printf("\n 		LIBC: %s", strrchr(strrchr_str4,'l'));
	printf("\n 		MINE: %s", ft_strrchr(strrchr_str4,'l'));

printf("\n\n=====Testing 17 - ft_strstr=====");

   	 char ft_strstr_dst1[] = "Hello person I know!";
   	 char ft_strstr_src2[] = "person";
	 printf("\n		LIBC: %s", strstr(ft_strstr_dst1, ft_strstr_src2));
	 char ft_strstr_dst3[] = "Hello person I know!";
   	 char ft_strstr_src4[] = "person";
	 printf("\n		MINE: %s", ft_strstr(ft_strstr_dst3, ft_strstr_src4));
	 printf("\n		LIBC: %s", ft_strstr_dst1);
	 printf("\n		MINE: %s", ft_strstr_dst3);	

printf("\n\n=====Testing 18 - ft_strnstr=====");	 

   	 char ft_strnstr_dst1[] = "Hello person I know!";
   	 char ft_strnstr_src2[] = "person";
	 printf("\n		LIBC: %s", strnstr(ft_strnstr_dst1, ft_strnstr_src2, 6));
	 char ft_strnstr_dst3[] = "Hello person I know!";
   	 char ft_strnstr_src4[] = "person";
	 printf("\n		MINE: %s", ft_strnstr(ft_strnstr_dst3, ft_strnstr_src4, 6));

	 printf("\n\n		LIBC: %s", strnstr(ft_strnstr_dst1, ft_strnstr_src2, 10));
	 printf("\n		MINE: %s", ft_strnstr(ft_strnstr_dst3, ft_strnstr_src4, 10));

	 printf("\n\n		LIBC: %s", strnstr(ft_strnstr_dst1, ft_strnstr_src2, 15));
	 printf("\n		MINE: %s", ft_strnstr(ft_strnstr_dst3, ft_strnstr_src4, 15));

printf("\n\n=====Testing 19 - ft_strcmp=====");
   	 char ft_strcmp_dst1[] = "Hello person I know!";
   	 char ft_strcmp_src2[] = "Hello";
	 printf("\n		LIBC: %d", strcmp(ft_strcmp_dst1, ft_strcmp_src2));
	 char ft_strcmp_dst3[] = "Hello person I know!";
   	 char ft_strcmp_src4[] = "Hello";
	 printf("\n		MINE: %d", ft_strcmp(ft_strcmp_dst3, ft_strcmp_src4));

   	 char ft_strcmp_dst5[] = "Hello person I know!";
   	 char ft_strcmp_src6[] = "Dog";
	 printf("\n		LIBC: %d", strcmp(ft_strcmp_dst5, ft_strcmp_src6));
	 char ft_strcmp_dst7[] = "Hello person I know!";
   	 char ft_strcmp_src8[] = "Dog";
	 printf("\n		MINE: %d", ft_strcmp(ft_strcmp_dst7, ft_strcmp_src8));	 

printf("\n\n=====Testing 20 - ft_strncmp=====");
   	 char ft_strncmp_dst1[] = "Hello person I know!";
   	 char ft_strncmp_src2[] = "Hello";
	 printf("\n		LIBC: %d", strncmp(ft_strncmp_dst1, ft_strncmp_src2, 5));
	 char ft_strncmp_dst3[] = "Hello person I know!";
   	 char ft_strncmp_src4[] = "Hello";
	 printf("\n		MINE: %d", ft_strncmp(ft_strncmp_dst3, ft_strncmp_src4, 5));

   	 char ft_strncmp_dst5[] = "Hello person I know!";
   	 char ft_strncmp_src6[] = "Dog";
	 printf("\n		LIBC: %d", strncmp(ft_strncmp_dst5, ft_strncmp_src6, 5));
	 char ft_strncmp_dst7[] = "Hello person I know!";
   	 char ft_strncmp_src8[] = "Dog";
	 printf("\n		MINE: %d", ft_strncmp(ft_strncmp_dst7, ft_strncmp_src8, 5));

printf("\n\n=====Testing 21 - ft_atoi=====");
	printf("\n		LIBC: %d", atoi("HelloWorld"));
	printf("\n 		MINE: %d", ft_atoi("HelloWorld"));

	printf("\n		LIBC: %d", atoi("91"));
	printf("\n 		MINE: %d", ft_atoi("91"));	

	printf("\n		LIBC: %d", atoi("a"));
	printf("\n 		MINE: %d", ft_atoi("a"));

	printf("\n		LIBC: %d", atoi("2147483647")); //Max Long
	printf("\n 		MINE: %d", ft_atoi("2147483647"));	

	printf("\n		LIBC: %d", atoi("2147483648")); //Max Long + 1
	printf("\n 		MINE: %d", ft_atoi("2147483648"));	

	//libc returns 0 here because atoi is only supposed to handle the initial non-printing characters before + || -
    char    *atoi_num1 = "\t\v\f\r\n \f- \f\t\n\r    06050";
	  printf("\n		LIBC: %d", atoi(atoi_num1));
	  printf("\n 		MINE: %d", ft_atoi(atoi_num1));

	// These two are not required by mouli & actually will fail if you pass because of the prototype needed to handle this.
	//your atoi does not work with over long max value
	//printf("\n		LIBC(over long max value): %d", atoi("99999999999999999999999999"));
	//printf("\n 		MINE(over long max value): %d", ft_atoi("99999999999999999999999999"));

	////your atoi does not work with over long min value (Also requires a different prototype that would fail mouli)
	//printf("\n		LIBC(over long min value): %d", atoi("-99999999999999999999999999"));
	//printf("\n 		MINE(over long min value): %d", ft_atoi("-99999999999999999999999999"));

printf("\n\n=====Testing 22 - ft_isalpha=====");
	printf("\n 		LIBC: %d", isalpha('a'));
	printf("\n 		MINE: %d\n", ft_isalpha('a'));

	printf("\n 		LIBC: %d", isalpha('!'));
	printf("\n 		MINE: %d\n", ft_isalpha('!'));

printf("\n\n=====Testing 23 - ft_isdigit=====");
	printf("\n 		LIBC: %d", isdigit(8));
	printf("\n 		MINE: %d\n", ft_isdigit(8));

	printf("\n 		LIBC: %d", isdigit('a'));
	printf("\n 		MINE: %d\n", ft_isdigit('a'));

	printf("\n 		LIBC: %d", isdigit(99));	
	printf("\n 		MINE: %d\n", ft_isdigit(99));	

	printf("\n 		LIBC: %d", isdigit('8'));
	printf("\n 		MINE: %d\n", ft_isdigit('8'));

printf("\n\n=====Testing 24 - ft_isalnum=====");
	printf("\n 		LIBC: %d", isalnum('a'));
	printf("\n 		MINE: %d\n", ft_isalnum('a'));

	printf("\n 		LIBC: %d", isalnum('!'));
	printf("\n 		MINE: %d\n", ft_isalnum('!'));

	printf("\n 		LIBC: %d", isalnum('8'));
	printf("\n 		MINE: %d\n", ft_isalnum('8'));		

	printf("\n 		LIBC: %d", isalnum(99));
	printf("\n 		MINE: %d\n", ft_isalnum(99));	

printf("\n\n=====Testing 25 - ft_isascii=====");
	printf("\n 		LIBC: %d", isascii('a'));
	printf("\n 		MINE: %d\n", ft_isascii('a'));

	printf("\n 		LIBC: %d", isascii('#'));
	printf("\n 		MINE: %d\n", ft_isascii('#'));

printf("\n=====Testing 26 - ft_isprint=====");
	printf("\n 		LIBC: %d", isprint('z'));
	printf("\n 		MINE: %d", ft_isprint('z'));

	printf("\n 		LIBC: %d", isprint(' '));
	printf("\n 		MINE: %d", ft_isprint(' '));

	printf("\n 		LIBC: %d", isprint('#'));
	printf("\n 		MINE: %d", ft_isprint('#'));


printf("\n=====Testing 27 - ft_toupper=====");
	printf("\n 		LIBC: %c", toupper('z'));
	printf("\n 		MINE: %c", ft_toupper('z'));

printf("\n\n=====Testing 28 - ft_tolower=====");
	printf("\n 		LIBC: %c", tolower('Z'));
	printf("\n 		MINE: %c", ft_tolower('Z'));	

printf("\n%s ======================Part 2 Function TESTS====================== %s", KCYN, KGRN);

// 29 ft_memalloc
// 30 ft_memdel
// 31 ft_strnew
// 32 ft_strdel
// 33 ft_strclr
// 34 ft_striter
// 35 ft_striteri
// 36 ft_strmap
// 37 ft_strmapi
// 38 ft_strequ
// 39 ft_strnequ
// 40 ft_strsub
// 41 ft_strjoin
// 42 ft_strtrim
// 43 ft_strsplit
// 44 ft_itoa

printf("\n\n=====Testing 45 - ft_putchar=====");
	// It can't handle unicode but that would require a different prototype and would fail mouli unit test.
	printf("\n		EXPECT: z");
	printf("\n 		RESULT: ");
	ft_putchar('z');

printf("\n\n=====Testing 46 - ft_putstr=====");
	printf("\n		EXPECT: Testing ft_putstr can print a string.");
	printf("\n 		RESULT: ");
	ft_putstr("Testing ft_putstr can print a string.\n");

// 47 ft_putendl

printf("\n\n=====Testing 48 - ft_putnbr=====");
	printf("\n		EXPECT: 34523452");
	printf("\n 		RESULT: ");
	ft_putnbr(34523452);
	printf("\n");

// 49 ft_putchar_fd
// 50 ft_putstr_fd
// 51 ft_putendl_fd
// 52 ft_putnbr_fd


printf("\n%s ======================Part 3 Function TESTS====================== %s \n", KCYN, KGRN);

// 53 ft_lstnew
// 54 ft_lstdelone
// 55 ft_lstdel
// 56 ft_lstadd
// 57 ft_lstiter
// 58 ft_lstmap

printf("\n%s ======================Part 4 Useful Extra Functions ====================== %s \n", KCYN, KGRN);
	printf("\n\n=====Useful Extra Functions  1 - ft_numlen=====");
	printf("\nft_numlen 12345:  \n\tEXPECT: 5 \n\tRESULT: %d\n", ft_numlen(12345));
	printf("\nft_numlen 12345:  \n\tEXPECT: 6 \n\tRESULT: %d\n", ft_numlen(-12345));
	printf("ft_numlen 42:  \n\tEXPECT: 2 \n\tRESULT: %d\n", ft_numlen(42));
	printf("ft_numlen 12345:  \n\tEXPECT: 5 \n\tRESULT: %d\n", ft_numlen(12345));

	printf("\n\n=====Useful Extra Functions  2 - ft_isspace=====");
	printf("\n ft_isspace \n\tEXPECT:1 \n\tRESULT:%d\n", ft_isspace(' '));
	printf("\n ft_isspace \n\tEXPECT:1 \n\tRESULT:%d\n", ft_isspace('\n'));
	printf("\n ft_isspace \n\tEXPECT:0 \n\tRESULT:%d\n", ft_isspace('A'));

	printf("\n\n=====Useful Extra Functions  3 - ft_count_non_spaces=====");
	printf("\n ft_count_non_spaces \n\tEXPECT:13 \n\tRESULT:%d\n", ft_count_non_spaces("This is a string"));
	printf("\n ft_count_non_spaces \n\tEXPECT:14 \n\tRESULT:%d\n", ft_count_non_spaces("\nTesting\nNew\nLine"));
	printf("\n ft_count_non_spaces \n\tEXPECT:1 \n\tRESULT:%d\n", ft_count_non_spaces("A"));

	printf("\n\n=====Useful Extra Functions  4 - ft_wordcount=====");
	printf("\n ft_wordcount \n\tEXPECT:4 \n\tRESULT:%d\n",ft_wordcount("This is a string", ' '));
	printf("\n ft_wordcount \n\tEXPECT:3 \n\tRESULT:%d\n",ft_wordcount("\nTesting\nNew\nLine", '\n'));
	printf("\n ft_wordcount \n\tEXPECT:3 \n\tRESULT:%d\n", ft_wordcount("*hello*fellow***students*", '*'));

	return (0);
}

















