#!/usr/bin/python3
def island_perimeter(grid):
    """
    return the perimeter of the island described in grid
    we found a 1 have a look on left right top and bottom
    add 1 to count
    :param grid:
    :return:
    """
    count = 0
    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[i])):
            if grid[i][j] == 1:
                if grid[i-1][j] == 0:
                    count += 1
                if grid[i + 1][j] == 0:
                    count += 1
                if grid[i][j + 1] == 0:
                    count += 1
                if grid[i][j - 1] == 0:
                    count += 1
    return count
