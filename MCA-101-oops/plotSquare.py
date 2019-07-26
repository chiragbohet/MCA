import matplotlib.pyplot as plt

def square(x, y):
    '''
    Objective : To plot a square
    Input Parameters :
        x: x coordinate
        y: y coordinate
    Return Value : None
    '''
    plt.plot(x, y, 'ro--')

def main():
    '''
    Objective : To plot a square based on user input.
    User Inputs :
        x: x coordinate
        y: y coordinate
    Return Value : None
    '''

    length = int(input('Enter size of the square: '))
    x = [0, length, length, 0, 0]
    y = [0, 0, length, length, 0]
    square(x, y)

    plt.title('Square')
    plt.axis([min(x)-1, max(x)+1, min(y)-1, max(y)+1])
    plt.grid()
    plt.show()

if __name__ == '__main__':
    main()
