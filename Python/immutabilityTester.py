"""
    Author : Ebeledike Frank
    Date : 10/10/2021
    Description : This program confirms if a string is immutable or not.
"""

name = "Frank"
print(name)
_id1 = id(name)

print(name.replace("F", "Ph"))
_id2 = id(name.replace("F", "Ph"))

if (_id1 != _id2):
    print("Strings are immutable")
else:
    print("Strings are mutable")

