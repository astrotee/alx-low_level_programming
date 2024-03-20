#!/usr/bin/python3
"""island perimeter"""


def island_perimeter(grid):
    """calculate the perimeter of an island"""
    if not isinstance(grid, list) or len(grid) == 0:
        return 0
    perimeter = 0
    height = len(grid)
    top, bottom, left, right = -1, -1, -1, -1

    for i, r in enumerate(grid):
        if not isinstance(r, list):
            return 0
        landi = 0
        bottom = i+1 if i+1 < height else -1
        while r[landi+1:].count(1) and (landi := r.index(1, landi+1)) != -1:
            left = landi - 1 if landi - 1 >= 0 else -1
            right = landi + 1 if landi + 1 < height else -1
            if left != -1 and r[left] == 0:
                perimeter += 1
            if right != -1 and r[right] == 0:
                perimeter += 1
            if top != -1 and grid[top][landi] == 0:
                perimeter += 1
            if bottom != -1 and grid[bottom][landi] == 0:
                perimeter += 1
        top = i
    return perimeter
