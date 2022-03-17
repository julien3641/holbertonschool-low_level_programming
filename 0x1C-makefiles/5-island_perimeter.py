#!/usr/bin/python3
""" write a function that compute the perimeter in the lac"""


def island_perimeter(grid):
    """
    return the perimeter of the island described in grid
    we found a 1 have a look on left right top and bottom
    add 1 to count
    :param grid:
    :return:
    """
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i-1][j] == 0:
                    count += 1
                if i == (len(grid) - 1) or grid[i + 1][j] == 0:
                    count += 1
                if j == (len(grid[i]) - 1) or grid[i][j + 1] == 0 :
                    count += 1
                if j == 0 or grid[i][j - 1] == 0:
                    count += 1
    return count
