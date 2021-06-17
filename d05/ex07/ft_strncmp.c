/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:05:51 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/01 18:22:38 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n && s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			i++;
	}
}
