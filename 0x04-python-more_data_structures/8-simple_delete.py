#!/usr/bin/python3


def simple_delete(a_dictionary, key=""):
    """
    removal of avalue in the dict
    """
    if key in a_dictionary:
        del a_dictionary[key]
    return a_dictionary
