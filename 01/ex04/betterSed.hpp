/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   betterSed.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:19:24 by jallerha          #+#    #+#             */
/*   Updated: 2022/11/04 01:30:17 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include <fstream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define RESET "\033[0m"

void	print_error(std::string description);
void	str_replace(std::string &haystack, std::string &from, std::string &to);