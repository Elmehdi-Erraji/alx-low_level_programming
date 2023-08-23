#!/usr/bin/python3
"""
5-island_perimeter module
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    size = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                size += 4

                if i > 0 and grid[i - 1][j] == 1:
                    size -= 2

                if j > 0 and grid[i][j - 1] == 1:
                    size -= 2

    return size
