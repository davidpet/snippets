import sys

x = 10
print('module loaded')
print(f'x = {x}')

if __name__ == '__main__':
    print('main')
else:
    print(__name__)

print(f'file: {__file__}')
print(f'argv0: {sys.argv[0]}')
