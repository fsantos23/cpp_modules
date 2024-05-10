/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:27:34 by fsantos2          #+#    #+#             */
/*   Updated: 2024/05/10 10:45:13 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void capitalize(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        std::cout << str[i++];
    }
}

int main(int argc, char **argv)
{
    if(argc >= 2)
    {
        int i = 1;
        while(argv[i])
            capitalize(argv[i++]);
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}