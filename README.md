# Libft

## Description
This project contains many reimplementations of standard C functions created by Nikolaus Roman. Re-coding these functions have been extremly usesful in learning the fundamentals of computer science.

## Getting Started
* Note: tested on Mac OS High Sierra
1. `git clone https://github.com/nikrom17/C_Libft.git libft`
2. `cd libft`
3. run `make` to compile the library and produce a `libft.a` file
4. to make use of the library run `gcc -L. -lft your_c_file.c` while in the `libft/` directory
	* you can move the `libft.a` file into your project repo **but** you must also copy over the `libft.h` header file
	* if you decide to move the library, run `gcc -L<path_to_library> -lft your_c_file.c`
5. Makefile commands:
	* `re`, `clean`, `fclean`, and `all`

# Implementations

## Data Structures Supported
 - Linked list (look for _ft\_ls-_ prefix in file names. Both single and double linked list supported.
 
## Functions Implemented
| Filename | Prototype | Description |
| --- | --- | --- |
| [ft_atoi.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_atoi.c) | ```int ft_atoi(const char *str);``` | Converts ASCII string to integer. Reimplementation of standard atoi. |
| [ft_bzero.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_bzero.c) | ```void ft_bzero(void *b, size_t len);``` | Write zeroes to a byte string. Reimplementation of standard bzero. |
| [ft_is_ptr_eql.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_is_ptr_eql.c) | ```int ft_is_ptr_eql(void *ptr1, void *ptr2);``` | Checks if two pointer values are equal |
| [ft_isalnum.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_isalnum.c) | ```int ft_isalnum(int c);``` | Return alphanumeric character test. Reimplementation of isalnum |
| [ft_isalpha.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_isalpha.c) | ```int ft_isalpha(int c);``` | Return alphabetic character test. Reimplementation of isalpha |
| [ft_isascii.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_isascii.c) | ```int ft_isascii(int c);``` | Return ASCII character test. Reimplementation of isascii |
| [ft_isdigit.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_isdigit.c) | ```int ft_isdigit(int c);``` | Return decimal-digit character test. Reimplementation of isdigit |
| [ft_isempty.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_isempty.c) | ```int ft_isempty(const char *str);``` | Return true if string is empty|
| [ft_isnst.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_isnst.c) | ```int ft_isnst(int c);``` | Return true if character is a space, new line or tab|
| [ft_isprint.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_isprint.c) | ```int ft_isprint(int c);``` | Return printing character test. Reimplementation of isprint |
| [ft_itoa.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_itoa.c) | ```char *ft_itoa(long long int nb);``` | Convert long long integer to ASCII decimal-digit |
| [ft_itoa_base.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_itoa_base.c) | ```char *ft_itoa_base(long long int nb, int base);``` | Convert long long integer in any base to ASCII decimal-digit string |
| [ft_lst_link_del.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_lst_link_del.c) | ```void	ft_lst_link_del(t_list **begin_list, void *content_ref, int (*cmp)());``` | Deletes a node in a link list if the content stored in the node matches the reference content |
| [ft_lstadd.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_lstadd.c) | ```void ft_lstadd(t_list **alst, t_list *new);``` | Append new t_list node at front of list |
| [ft_lstadd_back.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_lstadd_back.c) | ```void	ft_lstadd_back(t_list **alst, t_list *new);``` | Append new t_list node at back of list |
| [ft_lstdel.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_lstdel.c) | ```void ft_lstdel(t_list **alst, void (*del)(void *, size_t));``` | Remove and free the linked list and it's members|
| [ft_lstdelone.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_lstdelone.c) | ```void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));``` | Remove and free the t_list node |
| [ft_lstiter.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_lstiter.c) | ```void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));``` | Apply function to each element of linked list. |
| [ft_lstmap.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_lstmap.c) | ```t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));``` | Return new linked list with function applied to each element of linked list. |
| [ft_lstnew.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_lstnew.c) | ```t_list *ft_lstnew(const void *content, size_t content_size));``` | Return new linked list element with content set to param content |
| [ft_memalloc.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_memalloc.c) | ```void *ft_memalloc(size_t size);``` | Allocates memory with malloc then zeroes out the memory allocated. |
| [ft_memccpy.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_memccpy.c) | ```vvoid	*ft_memccpy(void *dest, const void *src, int c, size_t len);``` | Copy string until character found. Reimplementation of memccpy |
| [ft_memchr.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_memchr.c) | ```void *ft_memchr(const void *s, int c, size_t len);``` | Locate byte in byte string. Reimplementation of memchr |
| [ft_memcmp.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_memcmp.c) | ```int ft_memcmp(const void *s1, const void *s2, size_t n);``` | Compare byte string. Reimplementation of memcmp. |
| [ft_memcpy.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_memcpy.c) | ```void *ft_memcpy(void *dest, const void *src, size_t len);``` | Copy memory area. Reimplementation of memcpy. |
| [ft_memdel.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_memdel.c) | ```void ft_memdel(void **ap);``` | Free memory at pointer and set to null |
| [ft_memmove.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_memmove.c) | ```void *ft_memmove(void *dst, const void *src, size_t len);``` | Copy byte string. Reimplementation of memmove. |
| [ft_memset.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_memset.c) | ```void *ft_memset(void *b, int c, size_t len);``` | Fill a byte string with a byte value. Reimplementation of memset. |
| [ft_numlen.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_numlen.c) | ```int ft_numlen(int nb);``` | Return the number of digits needed to represent the number |
| [ft_putchar.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_putchar.c) | ```void ft_putchar(char c);``` |  Write a character to standard output |
| [ft_putchar_fd.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_putchar_fd.c) | ```void	ft_putchar_fd(char c, int fd);``` |  Write a character to file descriptor |
| [ft_putchar_wide.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_putchar_wide.c) | ```void	ft_putchar_wide(wchar_t c);``` |  Write a wide character to standard output |
| [ft_putendl.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_putendl.c) | ```void ft_putendl(const char *str);``` |  Put a string with a newline to standard output |
| [ft_putendl_fd.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_putendl_fd.c) | ```void	ft_putendl_fd(char const *str, int fd);``` |  Put a string with newline to file descriptor |
| [ft_putnbr.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_putnbr.c) | ```void ft_putnbr(int nb);``` | Write number to standard output |
| [ft_putnbr_fd.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_putnbr_fd.c) | ```void ft_putnbr_fd(int nb, int fd);``` | Write number to file descriptor |
| [ft_putstr.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_putstr.c) | ```void	ft_putstr(char const *str);``` |  Write a string to standard output |
| [ft_putstrs_fd.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_putstr_fd.c) | ```void	ft_putstr_fd(char const *str, int fd);``` |  Write strings to file descriptor |
| [ft_realloc_str.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_realloc_str.c) | ```char	*ft_realloc_str(char *str, size_t size);``` |  Reallocate memory for a string |
| [ft_str_is_alpha.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_str_is_alpha.c) | ```int		ft_str_is_alpha(char *str);``` |  Returns true if string only has alphabetic characters |
| [ft_str_is_lowercase.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_str_is_lowercase.c) | ```int		ft_str_is_lowercase(char *str);``` |  Return true if string only has lowercase alphabetic characters |
| [ft_str_is_numeric.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_str_is_numeric.c) | ```int		ft_str_is_numeric(char *str);``` |  Return true if string only has numeric characters |
| [ft_str_is_printable.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_str_is_printable.c) | ```int		ft_str_is_printable(char *str);``` |  Return true if string only has printable characters |
| [ft_str_is_uppercase.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_str_is_uppercase.c) | ```int		ft_str_is_uppercase(char *str);``` |  Return true if string only has uppercase alphabetic characters |
| [ft_strcat.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strcat.c) | ```char *ft_strcat(char *dest, const char *src);``` |  Concatenate strings. Reimplementation of strcat. |
| [ft_strchr.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strchr.c) | ```char *ft_strchr(const char *s, int c);``` |  Locate character in string. Reimplementation of strchr. |
| [ft_strclr.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strclr.c) | ```void ft_strclr(char *s);``` |  Clear string by zero-ing memory of string |
| [ft_strcmp.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strcmp.c) | ```int ft_strcmp(const char *s1, const char *s2);``` |  Compare strings. Reimplementation of strcmp. |
| [ft_strcpy.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strcpy.c) | ```char	*ft_strcpy(char *dest, char *const src);``` |  Copy strings. Reimplementation of strcpy. |
| [ft_strdel.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strdel.c) | ```void ft_strdel(char **as);``` |  Free string and set to NULL |
| [ft_strdup.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strdup.c) | ```char *ft_strdup(const char *s1);``` |  Save a copy of a string. Reimplementation of strdup. |
| [ft_strequ.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strequ.c) | ```int ft_strequ(const char *s1, const char *s2);``` |  Test if two strings are equal. |
| [ft_striter.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_striter.c) | ```void ft_striter(char *s, void (*f)(char *));``` |  Apply function to each character in string. |
| [ft_striteri.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_striteri.c) | ```void ft_striteri(char *s, void (*f)(unsigned int, char *));``` |  Apply function to n characters in string.  |
| [ft_strjoin.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strjoin.c) | ```char	*ft_strjoin(char const *s1, char const *s2);``` |  Allocates and returns a fresh null-terminated concat string of prefix and suffix. |
| [ft_strlcat.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strlcat.c) | ```size_t	ft_strlcat(char *dest, const char *src, size_t size);``` |  Size-bounded string concatenation. Reimplementation of strlcat. |
| [ft_strlen.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strlen.c) | ```size_t ft_strlen(const char *str);``` |  Find length of string. Reimplementation of strcat. |
| [ft_strmap.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strmap.c) | ```char *ft_strmap(const char *s, char (*f)(char));``` |  Apply function to each character in string and return new string|
| [ft_strmapi.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strmapi.c) | ```char *ft_strmapi(const char *s, char (*f)(unsigned int, char));``` |  Apply function to n characters in string and return new string |
| [ft_strncat.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strncat.c) | ```char *ft_strncat(char *dest, const char *src, size_t nb);``` |  Concatenate strings. Append not more than n characters. Reimplementation of strncat. |
| [ft_strncmp.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strncmp.c) | ```int		ft_strncmp(char *s1, char *s2, size_t n);``` |  Lexicographically compare strings (not more than n characters compared). Reimplementation of strncmp. |
| [ft_strncpy.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strncpy.c) | ```char *ft_strncpy(char *dest, const char *src, size_t n);``` |  Copy strings. Copy at most len characters from src into dest. Reimplementation of strcnpy. |
|[ft_strnequ.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strnequ.c) | ```int ft_strnequ(const char *s1, const char *s2, size_t n);``` |  Test if two strings are equal.  Test at most n characters. |
| [ft_strnew.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strnew.c) | ```char *ft_strnew(size_t size, char c);``` |  Allocate and return "fresh" string filled with character 'c'|
| [ft_strnstr.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strnstr.c) | ```char	*ft_strnstr(const char *s1, const char *s2, size_t n);``` |  Locate a substring in a string. Not more than len characters are searched. Reimplemenation of strnstr. |
| [ft_strrchr.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strrchr.c) | ```char *ft_strrchr(const char *s, int c);``` | Locate character in string. Reimplementation of strrchr |
| [ft_strrev.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strrev.c) | ```void ft_strrev(char *str);``` |  Reverse a string. |
| [ft_strsplit.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strsplit.c) | ```char **ft_strsplit(const char *str, char c);``` | Return list of strings. Split string at seperator character(c) |
| [ft_strstr.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strstr.c) | ```char	*ft_strstr(const char *str, const char *to_find);``` |  Locate a substring in a string. Reimplementation of strstr. |
| [ft_strsub.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strsub.c) | ```char *ft_strsub(const char *s, unsigned int start, size_t len);``` |  Return a substring beginning from start index. Behavior is undefined if start+len is not a substring. |
| [ft_strtrim.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_strtrim.c) | ```char *ft_strtrim(const char *s);``` | Remove leading and trailing newline, tab, and space characters. |
| [ft_tolower.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_tolower.c) | ```int ft_tolower(int c);``` | Convert character to lower case |
| [ft_toupper.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_toupper.c) | ```int ft_toupper(int c);``` | Convert character to upper case |
| [ft_uitoa_base.c](https://github.com/nikrom17/C_Libft/blob/master/src/ft_uitoa_base.c) | ```char	*ft_uitoa_base(unsigned long long int nb, int base);``` |  Convert unsigned long long integer in any base to ASCII decimal-digit string |
