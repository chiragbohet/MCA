def insertInSorted(lst,element,index=0):
    '''
    Objective : To insert a element in a sorted list at its respective position.
    Input Parameters :
            lst : The sorted list.
            element : The element to insert in the list.
            index : Iterative variable used to traverse the list.
    Return : The list with element inserted at its respective postion.
    '''
    #Approach : Using recursion.

    #When list is empty
    if len(lst)==0:
        return lst.append(element)

    if element < lst[index]:
        return lst.insert(index,element)
    elif element > lst[-1]:
        return lst.append(element)
    else:
        return insertInSorted(lst,element,index+1)

#Test Cases
list1 = [10,20,30,40]
print(list1)
insertInSorted(list1,5)
print(list1)

list2 = [10,20,30,40]
insertInSorted(list2,50)
print(list2)

list3 = [10,20,30,40]
insertInSorted(list3,25)
print(list3)

list4 = []
insertInSorted(list4,5)
print(list4)


