#!/usr/bin/python3

"""5-island_perimeter.py - that returns the perimeter of the island"""


def island_perimeter(grid):
    """
    Return: Returns the perimeter of the island described in grid
    """
    perimeter = 0
    perimetro_x_1 = {0: 4, 1: 3, 2: 2, 3: 1, 4: 0}
    for raw in range(len(grid)):
        for ind_col in range(len(grid[raw])):
            counter = 0
            if grid[raw][ind_col] == 1:
                try:
                    if (grid[raw][ind_col - 1] == 1 and ind_col - 1 >= 0):
                        counter = counter + 1
                except IndexError:
                    pass
                try:
                    if (grid[raw][ind_col + 1] == 1):
                        counter = counter + 1
                except IndexError:
                    pass

                try:
                    if (grid[raw - 1][ind_col] == 1 and raw - 1 >= 0):
                        counter = counter + 1
                except IndexError:
                    pass

                try:
                    if (grid[raw + 1][ind_col] == 1):
                        counter = counter + 1
                except IndexError:
                    pass

                perimeter = perimeter + perimetro_x_1[counter]
    return perimeter
