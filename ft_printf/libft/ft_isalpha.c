/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghahn <ghahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:58:08 by ghahn             #+#    #+#             */
/*   Updated: 2022/07/09 14:59:45 by ghahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}
