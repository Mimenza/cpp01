/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:29:17 by emimenza          #+#    #+#             */
/*   Updated: 2024/04/27 18:29:17 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string weaponType);
        std::string getType() const;
        void    setType(std::string type);
};

#endif