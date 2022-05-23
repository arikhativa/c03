/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:19:12 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/23 13:57:20 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!s1 || !s2 || n == 0)
		return (0);
	while (*s1 && *s1 == *s2 && i < n)
	{
		++s1;
		++s2;
		++i;
	}
	if (i == n)
		return (0);
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	len;

	if (!to_find)
		return (str);
	len = ft_strlen(to_find);
	while (*str)
	{
		if (!ft_strncmp(str, to_find, len))
			return (str);
		++str;
	}
	return (NULL);
}
