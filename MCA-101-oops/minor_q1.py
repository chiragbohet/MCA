def moveMax(lst, index, i=0, j=1):
    '''
    Objective : To move the maximum element to the specified index
    Input Variables :
            lst : The list containing elements
            index : The index to which the values needs to be moved
            i : iterative variable starting from 0
            j : iterative variable starting from 1
            
    '''

   
    
    if j==index:
       return lst

    if lst[i]>lst[j]:
        temp=lst[j]
        lst.pop(j)
        lst.insert(j,lst[i])
        lst.pop(i)
        lst.insert(i,temp)
        moveMax(lst,index,i+1,j+1)
        return
    else:
        moveMax(lst,index,i+1,j+1)
        return

def main():
    lst = [90,5,48,100,60,8,6,50,7,5,7,8]
    print(lst)
    moveMax(lst,7)
    print(lst)

if __name__ == "__main__":
    main()
