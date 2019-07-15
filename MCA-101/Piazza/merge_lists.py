def mergeSortedLists(lst1, lst2, lst3=[]):
    '''
    Objective : To merge two sorted lists.
    Input Parameters :
        lst1 : The first list containing sorted elements.
        lst2 : The second list containing sorted elements.
    Return :
        lst3 : The third list created by merging lst1 and lst2.
    '''
    
    if ( not lst1 and not lst2 ):
            return lst3
    elif ( lst1 and not lst2 ):
            lst3.extend(lst1)
            return lst3
    elif ( not lst1 and lst2):
            lst3.extend(lst2)
            return lst3
    else:
        if( lst1[0] < lst2[0] ):
            lst3.append(lst1[0])
            mergeSortedLists(lst1[1:], lst2, lst3)
            return lst3          
        else:
            lst3.append(lst2[0])
            mergeSortedLists(lst1, lst2[1:], lst3)
            return lst3

#Test cases
l1=[40, 50, 100, 200, 300]
print('List 1 - ', l1)
l2=[1,5.5,10,21,31]
print('List 2 - ', l2)
l3=mergeSortedLists(l1,l2)
print('Merged List - ', l3)

l1=[]
print('List 1 - ', l1)
l2=[1,5.5,10,21,31]
print('List 2 - ', l2)
l3=[]
l3=mergeSortedLists(l1,l2,l3)
print('Merged List - ', l3)

l1=[0]
print('List 1 - ', l1)
l2=[1,5.5,10,21,31]
print('List 2 - ', l2)
l3=[]
l3=mergeSortedLists(l1,l2,l3)
print('Merged List - ', l3)

l1=[100]
print('List 1 - ', l1)
l2=[1,5.5,10,21,31]
print('List 2 - ', l2)
l3=[]
l3=mergeSortedLists(l1,l2,l3)
print('Merged List - ', l3)

l1=[25,79]
print('List 1 - ', l1)
l2=[1,5.5,10,21,31]
print('List 2 - ', l2)
l3=[]
l3=mergeSortedLists(l1,l2,l3)
print('Merged List - ', l3)

l1=[4,5,23,40]
print('List 1 - ', l1)
l2=[1,5.5,10,21,31]
print('List 2 - ', l2)
l3=[]
l3=mergeSortedLists(l1,l2,l3)
print('Merged List - ', l3)


