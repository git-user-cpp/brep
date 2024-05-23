/*
 * binary representator written in C
 * Copyright (C) 2024  Andrew Kushyk
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "fun.h"

/*
 * Function: print_binary
 * ------------------------
 * Prints binary representation of a number
 *
 * Parameters:
 *     num: number to represent binary
 *     num_size: calculated size of number
 */
void print_binary(unsigned long long num, int num_size)
{
    int counter;
    for (counter = num_size - 1; counter >= 0; counter--)
    {
        if ((num >> counter) & 1)
        {
            printf("1");
        } else
        {
            printf("0");
        }
    }
    printf("\n");
}

/*
 * Function: initial_choice
 * ------------------------
 * Validates input. Checks if there's exactly one argument passed
 *
 * Parameters:
 *     args: amount of arguments that were passed
 */
void validate_scan(int args)
{
    if (args != 1)
    {
        printf("Error: wrong input\n");
        exit(1);
    }
}
