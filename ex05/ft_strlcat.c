/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:13:40 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/23 17:24:32 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (dest_len > size)
		return (src_len + size);
	if (size == 0)
		return (src_len);
	while (src[i] && (i + dest_len + 1) < size)
	{
		dest[dest_len + i] = src[i];
		++i;
	}
	dest[dest_len + i] = 0;
	return (src_len + dest_len);
}
