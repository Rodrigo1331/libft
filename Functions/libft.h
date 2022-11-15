/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:11:44 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/07 10:56:22 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(char *str);
void	ft_bzero(void *dest, size_t length);

int		ft_isalnum(int y);
int		ft_isalpha(int x);
int		ft_isascii(int y);
int		ft_isdigit(int x);
int		ft_isprint(int c);

void	*ft_memchr(const void *str, int y, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
char	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *dest, int a, size_t length);

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int n);

size_t	ft_strlcat(char *dest, char *src, unsigned int size);
size_t	ft_strlcpy(char *dest, char *src, unsigned int size);

char	*ft_toupper(char *str);
char	*ft_tolower(char *str);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
int		count_digit(int n);
#endif
