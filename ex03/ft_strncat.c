/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:12:37 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/23 10:17:57 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*runner;
	unsigned int	i;

	i = 0;
	if (!dest || !src)
		return (dest);
	runner = dest;
	while (*runner)
		++runner;
	while (i < nb && *src)
	{
		*runner = *src;
		++runner;
		++src;
		++i;
	}
	*runner = 0;
	return (dest);
}
