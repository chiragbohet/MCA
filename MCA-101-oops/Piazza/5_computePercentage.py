def computePercentage(maxMarks,obtMarks):
    '''
    Objective : To compute percentage of marks obtained.
    Input Variables :
            maxMarks : Maximum marks which can be obtained.
            obtMarks : Marks obtained.
    Return : Calculate percentage.
    '''
    #Approach : Divide obtMarks by maxMarks and multiply by 100

    percentage = obtMarks / maxMarks * 100

    return percentage
    

def main():
    '''
    Objective : To compute percentage of marks obtained by supplying user input to computerPercentage()
    User Inputs :
            maxMarks : Maximum marks which can be obtained.
            obtMarks : Marks obtained.   
    '''

    maxMarks = int(input("Enter Maximum marks : "))
    obtMarks = int(input("Enter marks obtained : "))
    print("Percentage : ",computePercentage(maxMarks,obtMarks))


if __name__ == "__main__":
    main()

    
    
