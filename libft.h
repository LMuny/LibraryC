#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int     ft_strlen(char *str);
int     ft_isalpha(char c);
int     ft_isdigit(char c);
int     ft_isalnum(char c);
int     ft_isascii(char c);
int     ft_isprint(char c);
int     ft_toupper(int c);
int     ft_tolower(int c);

void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_strncmp(const char *s1, const char *s2, size_t n);

void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);

#endif