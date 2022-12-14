/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:28:14 by jallerha          #+#    #+#             */
/*   Updated: 2022/11/02 15:44:45 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "betterSed.hpp"

void	str_replace(std::string &haystack, std::string &from, std::string &to)
{
	if (from == to)
		return ;
	if (from.length() == 0)
		return ;
	while (true)
	{
		std::size_t index = haystack.find(from);
		if (index == std::string::npos)
			break ;
		else
		{
			haystack.erase(index, from.size());
			haystack.insert(index, to);
		}
	}
}