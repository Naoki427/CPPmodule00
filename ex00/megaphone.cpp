/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshiminaoki <yoshiminaoki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:54:48 by yoshiminaok       #+#    #+#             */
/*   Updated: 2024/09/26 20:55:03 by yoshiminaok      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc,char **argv)
{
    int i;
    int j;

    i = 1;
    if(argc == 1)
        std::cout<<"SCREEEEEEEEECH!";
    while(i < argc)
    {
        j = 0;
        while(argv[i][j])
        {
            if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
                std::cout.put(argv[i][j] - ('a' - 'A'));
            else
                std::cout.put(argv[i][j]);
            j++;
        }
        i++;
    }
    std::cout<<std::endl;
    return (0);
}