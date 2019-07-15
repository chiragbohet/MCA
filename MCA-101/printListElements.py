def printListElements(lst):
    '''
    Objective : To print individual elements within a list.
    Input Parameters :
        lst : The list whose elements are needed to be printed.
    Output : The printed elements.   
    '''

    if len(lst)!=0:
        print(lst[:1])
        printListElements(lst[1:])
        

#Test Cases 
list1=[10,20,30,40]
printListElements(list1)

list2=[]
printListElements(list2)

list3=[1,2,3,4,5]
printListElements(list3)
