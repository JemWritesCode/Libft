// This file is for testing only.

#define KGRN  "\x1B[32m" //Make text Green.
#define KRED  "\x1B[31m" //Text Red
#define KCYN  "\x1B[36m"

#include "../libft/libft.h" //My libft header file.
#include <stdio.h> //Printf for testing.

int main(void){
setbuf(stdout, NULL); // set all writes to stdout to be unbuffered. This helps keep the printfs in correct order.

printf("\n%s ===========Part 1 Function TESTS=========== %s \n", KCYN, KGRN);
printf("\n\n=====Testing 1 - ft_memset=====");
	char memset_str1[] = "Hello world";
	printf("\n		LIBC: %s\n", memset(memset_str1, 'A', 8));
	printf("\n 		MINE: %s\n", ft_memset(memset_str1, 'A', 8));

// 2 ft_bzero
// 3 ft_memcpy
// 4 ft_memccpy
// 5 ft_memmove
// 6 ft_memchr
// 7 ft_memcmp

printf("\n\n=====Testing 8 - ft_strlen=====");
	printf("\n		LIBC: %zu", strlen("HelloWorld"));
	printf("\n 		MINE: %zu", ft_strlen("HelloWorld"));

printf("\n\n=====Testing 9 - ft_strdup=====");
	printf("\n		LIBC: %s", strdup("Stumpy is cool!"));
	printf("\n 		MINE: %s", ft_strdup("Stumpy is cool!"));

printf("\n\n=====Testing 10 - ft_strcpy=====");
	char ft_strcpy_dst[15];
	printf("\n		LIBC: %s", strcpy(ft_strcpy_dst, "Stumpy is cool!"));
	printf("\n 		MINE: %s", ft_strcpy(ft_strcpy_dst, "Stumpy is cool!"));

printf("\n\n=====Testing 11 - ft_strncpy=====");
	char ft_strncpy_dst[15];
	printf("\n		LIBC: %s\n", strncpy(ft_strncpy_dst, "Stumpy is cool!", 6));
	printf("\n 		MINE: %s\n", ft_strncpy(ft_strncpy_dst, "Stumpy is cool!", 6));

// 12 ft_strcat
// 13 ft_strncat
// 14 ft_strlcat

printf("\n\n=====Testing 15 - ft_strchr=====");
	char strchr_str1[] = "Yellow Butterfly";
	printf("\n		EXPECT: llow Butterfly");
	printf("\n 		RESULT: %s\n", ft_strchr(strchr_str1,'l'));

	char strchr_str2[] = "Snap Crackle Pop"; 
	printf("\n		EXPECT: p Crackle Pop");
	printf("\n 		RESULT: %s\n", ft_strchr(strchr_str2,'p'));

printf("\n\n=====Testing 16 - ft_strrchr=====");
	char strrchr_str1[] = "Yellow Butterfly"; 
	printf("\n		EXPECT: ly");
	printf("\n 		RESULT: %s\n", ft_strrchr(strrchr_str1,'l'));

	char strrchr_str2[] = "A string without n"; 
	printf("\n		EXPECT: (null)");
	printf("\n 		RESULT: %s\n", ft_strrchr(strrchr_str2,'l'));

	char strrchr_str3[] = "l is the first char"; 
	printf("\n		EXPECT: l is the first char");
	printf("\n 		RESULT: %s\n", ft_strrchr(strrchr_str3,'l'));

	char strrchr_str4[] = "the last char is l";
	printf("\n		EXPECT: l");
	printf("\n 		RESULT: %s\n", ft_strrchr(strrchr_str4,'l'));


// 17 ft_strstr
// 18 ft_strnstr
// 19 ft_strcmp
// 20 ft_strncmp

printf("\n\n=====Testing 21 - ft_atoi=====");
	printf("\n		EXPECT: %d", atoi("HelloWorld"));
	printf("\n 		RESULT: %d", ft_atoi("HelloWorld"));
	//todo but getting Error 1 in terminal


// 22 ft_isalpha

printf("\n\n=====Testing 23 - ft_isdigit=====");
	printf("\n		EXPECT: 1");
	printf("\n 		RESULT: %d\n", ft_isdigit(8));

	printf("\n		EXPECT: 0");
	printf("\n 		RESULT: %d\n", ft_isdigit('a'));

	printf("\n		EXPECT: 0");
	printf("\n 		RESULT: %d\n", ft_isdigit(99));	

// 24 ft_salnum
// 25 ft_isascii
// 26 ft_isprint
printf("\n\n=====Testing 27 - ft_toupper=====");
	printf("\n		EXPECT: Z");
	printf("\n 		RESULT: %c", ft_toupper('z'));

printf("\n\n=====Testing 28 - ft_tolower=====");
	printf("\n		EXPECT: z");
	printf("\n 		RESULT: %c", ft_tolower('Z'));	

printf("\n%s ===========Part 2 Function TESTS=========== %s \n", KCYN, KGRN);

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


printf("\n%s ===========Part 3 Function TESTS=========== %s \n", KCYN, KGRN);

// 53 ft_lstnew
// 54 ft_lstdelone
// 55 ft_lstdel
// 56 ft_lstadd
// 57 ft_lstiter
// 58 ft_lstmap

	return(0);
}
