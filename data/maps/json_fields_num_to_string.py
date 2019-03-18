# This script will convert some map json fields from integers to strings.
# Place this script in data/maps directory, and run it.

# python 3 version of the script
import re
import glob

for filepath in glob.iglob('./**/map.json', recursive=True):

    with open(filepath) as file:
        text = file.read()

    text = re.sub(r'\"var_value\": +(\d+)', r'"var_value": "\1"', text)
    text = re.sub(r'\"trainer_type\": +(\d+)', r'"trainer_type": "\1"', text)
    text = re.sub(r'\"trainer_sight_or_berry_tree_id\": +(\d+)', r'"trainer_sight_or_berry_tree_id": "\1"', text)

    with open(filepath, "w") as file:
        file.write(text)


##################################
# python 2 version of the script #
##################################
# import re
# import fnmatch
# import os
# import glob

# matches = []
# for root, dirnames, filenames in os.walk('data/maps'):
#     for filename in fnmatch.filter(filenames, 'map.json'):
#         matches.append(os.path.join(root, filename))

# for filepath in matches:

#     with open(filepath) as file:
#         text = file.read()

#     text = re.sub(r'\"var_value\": +(\d+)', r'"var_value": "\1"', text)
#     text = re.sub(r'\"trainer_type\": +(\d+)', r'"trainer_type": "\1"', text)
#     text = re.sub(r'\"trainer_sight_or_berry_tree_id\": +(\d+)', r'"trainer_sight_or_berry_tree_id": "\1"', text)

#     with open(filepath, "w") as file:
#         file.write(text)
