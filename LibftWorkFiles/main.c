// This file is for testing only.

#define KGRN  "\x1B[32m" //Make text Green.
#define KRED  "\x1B[31m" //Text Red
#define KCYN  "\x1B[36m"

#include "../libft/libft.h" //My libft header file.
#include <stdio.h> //Printf for testing.

int main(void){
setbuf(stdout, NULL); // set all writes to stdout to be unbuffered. This helps keep the printfs in correct order.

printf("\n%s ===========Part 1 Function TESTS=========== %s \n", KCYN, KGRN);
// 1 ft_memset
// 2 ft_bzero
// 3 ft_memcpy
// 4 ft_memccpy
// 5 ft_memmove
// 6 ft_memchr
// 7 ft_memcmp
// 8 ft_strlen
printf("Testing strlen, expect 10: %zu\n", ft_strlen("HelloWorld"));
// 9 ft_strdup
// 10 ft_strcpy
// 11 ft_strncpy
// 12 ft_strcat
// 13 ft_strncat
// 14 ft_strlcat

/////////////////// 15 ft_strchr
char str[] = "Yellow Butterfly"; 
char n = 'l';
printf("Testing ft_strchr, expect 'llow Butterfly': %s\n", ft_strchr(str,n));

/////////////////// 16 ft_strrchr
char str2[] = "Yellow Butterfly"; 
printf("Testing ft_strrchr, expect 'ly': %s\n", ft_strrchr(str2,n));
char str3[] = "A string without n"; 
printf("Testing ft_strrchr, expect (null): %s\n", ft_strrchr(str3,n));

// 17 ft_strstr
// 18 ft_strnstr
// 19 ft_strcmp
// 20 ft_strncmp
// 21 ft_atoi
// 22 ft_isalpha
// 23 ft_isdigit
// 24 ft_salnum
// 25 ft_isascii
// 26 ft_isprint
// 27 ft_toupper
// 28 ft_tolower

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


printf("Testing ft_putchar, expect 'z': "); // 45 ft_putchar
ft_putchar('z');
printf("\n\n");


ft_putstr("Testing ft_putstr can write a string.\n"); // 46 ft_putstr
printf("\n");

// 47 ft_putendl


printf("Testing ft_putnbr, expect 34523452: "); // 48 ft_putnbr
ft_putnbr(3452345);
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
