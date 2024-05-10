/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:28:24 by fsantos2          #+#    #+#             */
/*   Updated: 2024/05/09 23:20:27 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>

class Zombie {
    private :
        std::string name;

    public :

        Zombie(void);
        ~Zombie(void);
        std::string getZombie(void);
        void announce (void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif