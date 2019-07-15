def hanoi(n,source,spare,target):
    '''
    Objective : To solve tower of hanoi
    Input Parameters :
        n = Number of disks
        source = The initial pole no. containing all the disks
        spare = The pole no. used for temporary storing the disks
        target = The pole no. where disks are to be transferred
    Output : The order in which disks are to be transferred
    '''
    assert n>0

    if n==1:
        print('Move a disk from',source,'to',target)
    elif n==0:
        return
    else:
        hanoi(n-1,source,target,spare)
        print("Move a disk from",source,'to',target)
        hanoi(n-1,spare,source,target)

hanoi(4,1,2,3)
