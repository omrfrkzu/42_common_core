/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocaman <mkocaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:52:10 by mkocaman          #+#    #+#             */
/*   Updated: 2023/07/20 12:31:30 by mkocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int a)
{
	if (a >= 97 && a <= 122)
		a -= 32;
	return (a);
}