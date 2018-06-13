/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 18:28:36 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/12 19:00:34 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H

# include <string.h>
# include <wchar.h>
# include <stdlib.h>
# include "./ft_printf/ft_printf.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, void const *src, size_t n);
void				*ft_memccpy(void *dst, void const *src, int c, size_t n);
void				*ft_memmove(void *dst, void const *src, size_t len);
void				*ft_memchr(void const *s, int c, size_t n);
int					ft_memcmp(void const *s1, void const *s2, size_t n);
int					ft_atoi(char *s);
char				*ft_itoa(int n);
char				*ft_itoa_base(int n, int base);
char				*ft_ltoa(long n);
char				*ft_ltoa_base(long long n, int base);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				*ft_memrealloc(void *s1, void *s2, size_t size);
void				ft_memdel(void **ap);

/*
** String functions
*/
size_t				ft_strlen(char const *s1);
size_t				ft_wcslen(const wchar_t *ws);
size_t				ft_wsbytelen(const wchar_t *ws);
size_t				ft_wcbytelen(wchar_t wchar);
char				*ft_strdup(char const *s1);
char				*ft_strndup(const char *s, size_t n);
int					ft_strcmp(char const *s1, char const *s2);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
char				*ft_strcpy(char *dst, char const *src);
char				*ft_strncpy(char *dst, char const *src, size_t len);
char				*ft_strcat(char *s1, char const *s2);
char				*ft_strncat(char *s1, char const *s2, size_t n);
size_t				ft_strlcat(char *dst, char const *src, size_t dstsize);
size_t				ft_locate_char(const char *str, char c);
char				*ft_strchr(char const *s, int c);
char				*ft_strrchr(char const *s, int c);
char				*ft_strstr(char const *haystack, char const *needle);
char				*ft_strnstr(char const *haystack,
		char const			*needle, size_t len);
char				*ft_strnew(size_t size);
char				*ft_strinit(size_t size, char c);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strtrim(char const *s);
void				ft_strtrim_tab(char ***s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_triplejoin(char *s1, char *s2, char *s3);
char				*ft_triplejoin_free(char *s1, char *s2, char *s3);
char				**ft_strsplit(char const *s, char c);
t_list				*ft_strsplittolst(char const *s, int (*ft)(int c));
char				**ft_splitwhitespace(char const *s);
char				*ft_realloc(char *s1, char *s2);
char				*ft_super_realloc(char *s1, char *s2);
char				*ft_append_char(char *s1, char c);
void				ft_strcapitalize(char *s);
char				*ft_strexpand(char **str, size_t size);
void				*ft_myrealloc(void *ptr, size_t prev_size, size_t new_size);

void				**ft_matricealloc(size_t d1, size_t d2);
void				ft_matricedel(char ***p_to_matrice);
int					ft_putchar(char c);
int					ft_putnchar(char c, int n);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putstr_tab(char **tab);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putllnbr(intmax_t n);
void				ft_putnbr_fd(int n, int fd);
void				print_bits(unsigned char octet);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstfree(t_list **alst);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstpushback(t_list **lst, t_list *node);
void				ft_lstrdel(void *content, size_t content_size);

int					ft_isblank(int c);
int					ft_isspace(int c);
int					ft_iscntrl(int c);
int					ft_isgraph(int c);
int					ft_islower(int c);
int					ft_isupper(int c);
int					ft_isxdigit(int c);
void				ft_swap(int *a, int *b);
void				ft_sort_tab(int	*tab, unsigned int size);
size_t				ft_nbr_len(long nbr);
int					ft_str_is_lowercase(char *s);
int					ft_str_is_uppercase(char *s);
int					ft_str_is_alpha(char *s);
int					ft_str_is_numeric(char *s);
int					ft_str_is_printable(char *s);

long				ft_abs_ptr(void *ptr);
int					ft_abs_int(int nbr);

void				ft_putnbrbase(uintmax_t nbr, char *base);
void				print_hex(unsigned long long n);
size_t				ft_nbr_len_base(uintmax_t nb, int base);
int					printf_nbrlen_base(uintmax_t nbr, char *base);
char				*ft_get_stdout(int *pfd, int *save);
int					get_next_line(int const fd, char **line);

char				*ft_getenv(const char *name, char **environ);

int					ft_is_dir(char *path);
int					ft_is_exec(char *path);
int					ft_is_binary(char *path);

int					get_shell_line(char **line);
#endif
