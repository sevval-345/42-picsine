/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikci <smikci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:10:03 by smikci            #+#    #+#             */
/*   Updated: 2023/09/20 20:24:31 by smikci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destk;
	unsigned int	srck;

	i = ft_strlen(dest);
	j = 0;
	destk = ft_strlen(dest);
	srck = ft_strlen(src);
	if (size < 1)
		return (srck + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < destk)
		return (srck + size);
	else
		return (destk + srck);
}
