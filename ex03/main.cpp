/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:43:29 by emimenza          #+#    #+#             */
/*   Updated: 2024/04/27 18:43:29 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/Weapon.hpp"
#include "incs/HumanA.hpp"
#include "incs/HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    // {
    //     Weapon club = Weapon("crude spiked club");
    //     HumanB jim("Jim");
    //     jim.setWeapon(club);
    //     jim.attack();
    //     club.setType("some other type of club");
    //     jim.attack();
    // }
    return 0;
}