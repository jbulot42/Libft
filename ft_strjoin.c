/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:24:41 by jbulot            #+#    #+#             */
/*   Updated: 2026/02/06 16:07:32 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	res = malloc(sizeof(*res) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		res[i++] = s2[j++];
	res[i] = '\0';
	return (res);
}
