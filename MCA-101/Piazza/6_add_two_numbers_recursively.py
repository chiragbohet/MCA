def increment(number):
    '''
    Objective : To increment a number by 1.
    Input Parameters :
            number : The number which is to be incremented.
    Return : The incremented number
    '''
    
    return number + 1


def add(num1, num2):
    '''
    Objective: To add two numbers recursively by using increment() function.
    Input Parameters :
            num1 : The first number which is to be added .
            num2 : The second number which is to be added .
    Return : The sum of num1 and num2
    '''
    #Approach : Using increment()

    if num2 == 0:
        return num1
    else:
        return add(increment(num1), num2 - 1)
        

def main():
    '''
    Objective: To add two numbers recursively by supplying input to add() function.
    User Inputs :
            num1 : The first number which is to be added .
            num2 : The second number which is to be added .
    Output : The sum of numbers
    '''

    number1 = int(input("Enter first number : "))
    
    number2 = int(input("Enter second number : "))
    
    print("Sum : ",add(number1,number2))

if __name__ == "__main__":
    main()
    
