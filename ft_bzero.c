/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:23:40 by dhers             #+#    #+#             */
/*   Updated: 2020/11/19 17:27:20 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int n)

{
	int 	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
		str[i++] = 0;
	return (s);
}
