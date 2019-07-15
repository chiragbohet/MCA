def mergeTwoLists(lst1, lst2, lst3 = [], i=0, j=0):
    '''
    Objective : Merge two lists
    Input Parameters :
        lst1 : The list 1
        lst2 : The list 2
    Return : The Merged list
    '''
    #Approach : Using Recursion

    
    a=len(lst1)
    b=len(lst2)

    if (i==a and j==b):
        return lst3
    elif (i==a):
        return lst3.extend(lst2[j:])
    elif (j==b):
        return lst3.extend(lst1[i:])
    else:
        if lst1[i] < lst2[j]:
            lst3.append(lst1[i])
            return mergeTwoLists(lst1, lst2, lst3, i+1, j)
        else:
            lst3.append(lst2[j])
            return mergeTwoLists(lst1, lst2, lst3, i, j+1)

lst1=[10,20,30,40,50]
lst2=[5,15,25,35,45]
print(mergeTwoLists(lst1, lst2))
