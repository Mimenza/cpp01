/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:42:42 by emimenza          #+#    #+#             */
/*   Updated: 2024/04/27 18:42:42 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
    this->type = weaponType;
}

std::string Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}