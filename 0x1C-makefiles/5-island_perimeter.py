#!/usr/bin/python3
"""
This module calculates the perimeter of an island
"""


def island_perimeter(grid):
    """
    This function returns perimeter of grid
    """
    per = 0

    for i in range(len(grid)):
        for p in range(len(grid[i])):
            if grid[i][p] == 1:
                per += 4
                try:
                    if grid[i - 1][p]:
                        per -= 1
                except Exception:
                    per += 0
                try:
                    if grid[i][p - 1]:
                        per -= 1
                except Exception:
                    per += 0
                try:
                    if grid[i][p + 1]:
                        per -= 1
                except Exception:
                    per += 0
                try:
                    if grid[i + 1][p]:
                        per -= 1
                except Exception:
                    per += 0
    return per
