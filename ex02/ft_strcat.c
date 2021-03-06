/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:26:19 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/23 10:10:04 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*runner;

	if (!dest || !src)
		return (dest);
	runner = dest;
	while (*runner)
		++runner;
	while (*src)
	{
		*runner = *src;
		++runner;
		++src;
	}
	*runner = 0;
	return (dest);
}
