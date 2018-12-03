# Libft
### Recreating Libft at 42 Silicon Valley
Currently a Work in Progress


**Project Specs:** 
`LibftWorkFiles/libft.en copy.pdf` 
Project must also follow the standards of the Norm pdf.

#### Test Cases
The `JemLibftTests` folder is designed to be dropped into a libft project and compare vs libc. It's primative compared to 42 File Checker but it has been good practice for writing robust test cases.

#### Function Notes
1.) To keep `ft_memmove` short it calls on mempcy. `ft_memcpy` needs to move from the front of the string to pass the memmove overlap tests. While memmove has to have a case to move from the back of the string for src < dst. 