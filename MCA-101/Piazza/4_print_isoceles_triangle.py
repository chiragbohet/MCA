def genTriangle(s):
    '''
    Objective : To print a generic symbol isoceles Triangle.
    Input Parameters :
            s : Generic user input.
    Output : The isoceles Triangle.
    '''
    #Approach : Using print()

    print('     ',s)
    print('    ',s,s)
    print('   ',s,s,s)
    print('  ',s,s,s,s)
    print(' ',s,s,s,s,s)
    print('',s,s,s,s,s,s)


def main():
    '''
    Objective : To print a generic symbol isoceles Triangle by providing user input to genTriangle().
    User Inputs :
            s : The generic symbol
    '''

    s = input("Input a symbol : ")
    genTriangle(s)


if __name__ == "__main__":
    main()
