""" Module that contains the island_perimeter function """


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid """
    perimeter = 0

    nlines = len(grid)

    if grid != []:
        nrows = len(grid[0])

    for m in range(nlines):
        for n in range(nrows):
            if grid[m][n] == 1:
                if (m - 1) == -1 or grid[m - 1][n] == 0:
                    perimeter += 1
                if (m + 1) == nlines or grid[m + 1][n] == 0:
                    perimeter += 1
                if (n - 1) == -1 or grid[m][n - 1] == 0:
                    perimeter += 1
                if (n + 1) == nrows or grid[m][n + 1] == 0:
                    perimeter += 1

    return perimeter
