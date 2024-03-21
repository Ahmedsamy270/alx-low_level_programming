#!/usr/bin/python3
"""defines an island perimeter"""


def island_perimeter(grid):
    """return the perimiter of an island"""

    edge = 0
    size = 0
    width = len(grid[0])
    hieght = len(grid)

    for i in range(hieght):
        for x in range(width):
            if grid[i][x] == 1:
                size += 1
                if (x > 0 and grid[i][x - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][x] == 1):
                    edge += 1
    return size * 4 - edge * 2
