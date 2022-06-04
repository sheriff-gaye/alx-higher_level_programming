#!/usr/bin/python3
def no_c(my_string):
    new_string = my_string.replace('C', '', 2)
    new_string = my_string.replace('c', '', 2)
    return new_string
