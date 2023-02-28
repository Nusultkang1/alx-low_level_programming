#!/usr/bin/python3
"""
5-main
"""
land_per = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]

    print("The height : {}".format(len(grid)))
    print("The width : {}".format(len(grid[0])))
    print(land_per(grid))
