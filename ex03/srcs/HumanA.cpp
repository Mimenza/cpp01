/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:03:21 by emimenza          #+#    #+#             */
/*   Updated: 2024/04/27 19:03:21 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon)
{
    this->name = name;
}

void HumanA::attack() const
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
