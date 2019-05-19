/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:13:20 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/29 22:25:23 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ltr);

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (!(base) || !(base[1]))
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_convert(int nbr, char *base, unsigned int base_len)
{
	unsigned int nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -1 * nbr;
	}
	else
		nb = nbr;
	if (nb >= base_len)
		ft_convert(nb / base_len, base, base_len);
	ft_putchar(base[(nb % base_len)]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int base_length;

	base_length = check_base(base);
	if (!base_length)
		return ;
	ft_convert(nbr, base, base_length);
}
