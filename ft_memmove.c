/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:21:12 by dhers             #+#    #+#             */
/*   Updated: 2020/11/20 09:41:38 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	unsigned char	temp;

	temp1 = (unsigned char *)src;
	temp2 = (unsigned char *)dest;
	while (n > 0)
	{
		temp = *temp1;
		*temp2 = temp;
		*temp1++;
		*temp2++;
		n--;
	}
	return (dst);
}
