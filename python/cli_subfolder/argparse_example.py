
import argparse

# Create the parser
parser = argparse.ArgumentParser()

# Add the command-line arguments
parser.add_argument('--field1', help='Value for field1')
parser.add_argument('--flag', action='store_true', help='Flag option')
parser.add_argument('values', nargs='*', help='Values')

# Parse the command-line arguments
args = parser.parse_args()

# Access the parsed arguments
field1_value = args.field1
flag_value = args.flag
values = args.values

# Print the parsed values
print(f'Field1: {field1_value}')
print(f'Flag: {flag_value}')
print(f'Values: {values}')
