/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:59:53 by dhers             #+#    #+#             */
/*   Updated: 2020/11/19 17:18:24 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)

{
	size_t 	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
		str[i++] = c;
	return (s);
}
