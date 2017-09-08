/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unittest_strdup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:59:25 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 15:59:29 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*unittest_strdup(const char *s1)
{
	int		i;
	char	*copy;

	copy = "     ";
	i = 0;
	while ((copy[i] = s1[i]) != 0)
		i++;
	return (copy);
}
