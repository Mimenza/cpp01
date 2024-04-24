/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:09:38 by emimenza          #+#    #+#             */
/*   Updated: 2024/04/24 18:09:38 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/zombie.hpp"

//Constructor
Zombie::Zombie(void)
{
    this->name ="<name>";
}

//Destructor
Zombie::~Zombie(void)
{
    std::cout << "The zombie "<< this->name << " has been destroyed" << std::endl;
}

Zombie::Zombie (std::string name)
{
    this->name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}