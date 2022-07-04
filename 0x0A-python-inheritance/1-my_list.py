#!/usr/bin/python3
"""
contains my lists class
"""
class MyList(list):
    """a sub class of a list"""

    def __init__(self):
        """initializing the objects"""
        super().__init__()

    def print_sorted(self):
        """prints the sorted list"""
        print(sorted(self))
