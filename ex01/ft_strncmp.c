/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:15:59 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/22 15:25:02 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
