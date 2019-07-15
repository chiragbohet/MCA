def areaRectangle(length,breadth):
    '''
    Objective: To find area of a rectangle.
    Approach: Calculating the area by formula length * breadth
    Input Parameters: 
        length : Length of the rectangle
        breadth: Breadth of the rectangle
    Output: 
        The area of the rectangle
    '''
    return (length * breadth)

def main():
    '''
    Objective : To take length and breadth as user input and supply it as input in areaRectangle()
    Approach: Using input() function
    '''
    length = int(input("Enter the length : "))
    breadth = int(input("Enter the breadth : "))
    area = areaRectangle(length,breadth)
    print('The area is : ',area)

if __name__ == '__main__':
    main()
    
