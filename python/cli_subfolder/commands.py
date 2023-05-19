
import sys

def command1(x):
    print('command1: ' + str(x))
    
def command2(x, y):
    print('command2: ' + str(x) + ',' + str(y))
    
commands = {
        'command1': command1,
        'command2': command2,
}

if __name__ == '__main__':
    # Normally you'd check and print an error if wrong
    command = sys.argv[1]
    args = sys.argv[2:]
    
    commands[command](*args)
