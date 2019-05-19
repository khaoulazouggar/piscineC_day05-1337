/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 17:50:53 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/29 02:43:16 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long int nbr;

	nbr = nb;
	if (nbr < 0)
	{
		if (nbr > -10)
			ft_putchar('-');
		else
			ft_putnbr(nbr / 10);
		ft_putchar((nbr * (-1)) % 10 + '0');
	}
	else if (nbr >= 0 && nbr < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}
