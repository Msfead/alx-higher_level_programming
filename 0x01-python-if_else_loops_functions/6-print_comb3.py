#!/usr/bin/python3
for i n range(10):
    for j in range(i, 10):
        if i < j:
            print("{:d}{:d}".format(i, j),
                    end="\n" if i == 8 and j == 9 else ", ")
