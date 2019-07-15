class Square:
    '''
    This class describes the shape Square.
    '''
    count = 0
    
    #Constructor
    def __init__(self,side):
        '''
        Objective : To initialize a object of class Square.
            self (implicit parameter) : object of type Square.
            side: The length of Square side.
        '''
        self.side = side
        Square.count+=1
    
    #getter methods
    def getSide(self):
        '''
        Objective : To retrieve length of the Square side.
        Input Parameters : 
            self (implicit parameter) : object of type Square
        Return : The side of the Square 
        '''
        return self.side
    
    def getArea(self):
         '''
        Objective : To retrieve calculated area of the Square.
        Input Parameters : 
            self (implicit parameter) : object of type Square
        Return : The area of Square
        '''
        #Approach : The area is calculated by multiplying side into side    
        return self.side*self.side
    
    def getPerimeter(self):
         '''
        Objective : To retrieve calculated perimeter of the Square
        Input Parameters : 
            self (implicit parameter) : object of type Square
        Return : The perimeter of the Square
        '''
        #Approach : The perimeter is calculated by Multiplying side into 4    
        return self.side*4
    
    #setter methods
    def setSide(self,side):
         '''
        Objective : To set the length of Square side.
        Input Parameters : 
            self (implicit parameter) : object of type Square.
            side : The length of Square side.
        Return : None
        '''
        self.side = side

    #other methods
    def __del__(self):
        
        print("Deleted!")
        Square.count-=1
    
