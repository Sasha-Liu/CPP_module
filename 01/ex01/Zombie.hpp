/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:05:33 by sasha             #+#    #+#             */
/*   Updated: 2023/04/23 12:01:41 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
    public:
        Zombie(void);
        Zombie(std::string name);
		Zombie(Zombie const &zombie);
        ~Zombie(void);
        
        void    			announce(void) const;
		void				set_name(std::string name);
		std::string const	&get_name(void) const;
		Zombie				&operator=(Zombie &zombie);
    private:
        std::string	_name;
};

#endif