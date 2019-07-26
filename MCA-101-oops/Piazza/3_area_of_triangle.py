def areaTriangle(base,height):
    '''
    Objective : To find area of a Triangle
    Input Parameters :
        base: The base of the Triangle
        height: The height of the Triangle
    Approach: Area = 1/2 * ( base * height )
    Output : The area of the Triangle
    '''
    return ((base*height)/2)

def main():
    '''
    Objective : To take base,height as user inputs and supply them to the areaTriangle() function
    '''
    base = int(input('Enter the base : '))
    height = int(input('Enter the height : '))
    print('The area is : ',areaTriangle(base,height))

if __name__ == '__main__':
    main()
