/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:04:23 by jallerha          #+#    #+#             */
/*   Updated: 2022/11/14 22:33:58 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>



class Bureaucrat
{
	private:
		const std::string _name;
		int 			  _grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat &ref);
		~Bureaucrat(void);
		Bureaucrat &operator=(Bureaucrat &ref);

		/** ====== GETTERS ====== **/
		std::string getName(void) const;
		int getGrade(void) const;

		/** ====== SETTERS ====== **/
		void setGrade(int grade);

		/** ====== INC / DEC ====== **/
		void increaseGrade(void);
		void decreaseGrade(void);

		/** ====== EXCEPTIONS ====== **/

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &ref);