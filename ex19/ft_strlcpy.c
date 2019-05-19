 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 21:45:34 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/29 22:23:53 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char			*d;
	char			*f;

	d = dest;
	f = dest + size;
	j = 0;
	while (src[j])
		j++;
	i = 0;
	while (src[i] && d < f - 1)
	{
		dest[i] = src[i];
		i++;
		d++;
	}
	if (d < f)
		dest[i] = '\0';
	return (j);
}
