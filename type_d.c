/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   argument_d.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/08 22:26:52 by swofferh       #+#    #+#                */
/*   Updated: 2020/03/08 22:38:16 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	width_d(t_info *node, int nbr, int len)
{
	if (nbr > 0 && node->sign != 0)
		len++;
	if (node->flag == MINUS)
	{
		pt_putnbr(node, pt_putsign(node, nbr));
		pt_putlen(node, ' ', node->width - len);
	}
	else if (node->flag == ZERO)
	{
		nbr = pt_putsign(node, nbr);
		pt_putlen(node, '0', node->width - len);
		pt_putnbr(node, nbr);
	}
	else if (node->flag == NOFLAG)
	{
		pt_putlen(node, ' ', node->width - len);
		pt_putnbr(node, pt_putsign(node, nbr));
	}
}

void	preci_d(t_info *node, int nbr, int len)
{
	int sign;

	sign = 0;
	if (nbr < 0)
		sign++;
	if (node->flag == MINUS)
	{
		nbr = pt_putsign(node, nbr);
		pt_putlen(node, '0', node->precision - len + sign);
		pt_putnbr(node, nbr);
	}
	if (node->precision < node->width)
	{
		if (node->sign == PLUS)
			sign++;
		pt_putlen(node, ' ', node->width - ft_maxof(node->precision, len) - sign);
		if (node->precision < len)
			pt_putlen(node, ' ', sign);
	}
	if (node->flag == ZERO || node->flag == NOFLAG)
	{
		nbr = pt_putsign(node, nbr);
		pt_putlen(node, '0', node->precision - len + sign);
		pt_putnbr(node, nbr);
	}
}

void	ft_d_argument(t_info *node)
{
	int	nbr;
	int	len;

	nbr = va_arg(node->argument, int);
	len = ft_lenbase(nbr, 10);
	if (nbr == 0)
	{
		if (node->period == TRUE)
		{
			if (node->sign != 0)
				node->width--;
			if (node->sign != 0)
				pt_putsign(node, nbr);
			if (node->flag == ZERO)
				pt_putlen(node, ' ', node->width - node->precision);
			if (node->flag == NOFLAG)
				pt_putlen(node, ' ', node->width - node->precision);
			pt_putlen(node, '0', node->precision);
			if (node->flag == MINUS)
				pt_putlen(node, ' ', node->width - node->precision);
			
		}
		else
		{
			if (node->sign != 0)
				node->width--;
			if (node->flag == ZERO)
			{
				pt_putsign(node, nbr);
				pt_putlen(node, '0', node->width - len);
				pt_putnbr(node, nbr);
			}
			else 
			{
				if (node->flag == NOFLAG)
					pt_putlen(node, ' ', node->width - len);
				pt_putnbr(node, pt_putsign(node, nbr));
				if (node->flag == MINUS)
					pt_putlen(node, ' ', node->width - len);
			}
		}
	}
	else if (!node->period)
	{
		if (!node->width)
			pt_putnbr(node, pt_putsign(node, nbr));
		else
			width_d(node, nbr, len);
	}
	else
		preci_d(node, nbr, len);
}
