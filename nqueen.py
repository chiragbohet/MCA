# N - Queen genetic algorithm
import random
class GeneticChess:    
    def __init__ (self,n):
        self.board = self.createBoard(n)
        self.solution = []
        self.size = n
        self.env = []
        self.goal = None
        self.goalIndex = -1
        if(n < 4):
            print("\n Cannot sol4ve for n < 4 ")
            exit(0)
    
    def createBoard(self,n):
        board =  [[0 for i in range(n)] for j in range(n)]
        return board
    
    def fillBoard(self,board,gene):
        for i in range(self.size):
            board[gene[i]][i] = 1
    
    def replicateCopy(self):
        from random import shuffle
        copy = list(range(self.size))
        shuffle(copy)
        while copy in self.env:
            shuffle(copy)
        return copy
    
    def initialGeneration(self):  #initial population
        for i in range(0,100):
            combo = self.replicateCopy()
            self.env.append(combo)
    
    def collisionDetect(self,gene): #fitness function
        collide = 0
        board = self.createBoard(self.size)
        self.fillBoard(board,gene)
        for i in range(len(gene)): #diagonal
            for j in range(len(gene)):
                if(i != j):
                    x = abs(i-j)
                    y = abs(gene[i] - gene[j])
                    if(x == y):
                        collide+=1
        for i in range(len(gene)):  #horiontal + vertical
            for j in range(len(gene)):
                if board[i][j] == 1 :
                    for k in range(len(gene)):
                        if k != i and k != j :
                            if board[i][k] == 1 :
                                collide+=1
                            if board[k][j] == 1:
                                collide +=1
        return collide
    
    def isSolution(self,gene):
        if self.collisionDetect(gene) == 0:
            return True
        return False
    
    def crossGene(self,gene1,gene2):
        for i in range(1,len(gene1)):
            if abs(gene1[i-1] - gene1[i]) < 2:
                gene2[i],gene1[i] = gene1[i],gene2[i]
            if abs(gene2[i-1] - gene2[i]) < 2:
                gene2[i],gene1[i] = gene1[i],gene2[i]

    def mutateGene(self,gene):
        newGene = []
        for i in gene:
            if i not in newGene:
                newGene.append(i)
        for i in range(self.size):
            if i not in newGene:
                newGene.append(i)
        mid = int(self.size/2)
        leftSwap = random.randint(0,mid)
        rightSwap  = random.randint(0,mid)
        newGene[leftSwap],newGene[rightSwap] =  newGene[rightSwap],newGene[leftSwap]
        gene = newGene
        return gene

    def crossMutate(self):
        for i in range(1,len(self.env),2):
            gene1 = self.env[i-1][:]
            gene2 = self.env[i][:]
            self.crossGene(gene1,gene2)
            gene1 = self.mutateGene(gene1)
            gene2 = self.mutateGene(gene2)
            self.env.append(gene1)
            self.env.append(gene2)

    def geneSelect(self):  #select gene from env
        getGenes = []
        newEnv = []

        for gene in self.env:
            getGenes.append(self.collisionDetect(gene))
        if(min(getGenes) ==  0):
            self.goalIndex = getGenes.index(min(getGenes))
            self.goal = self.env[self.goalIndex]
            return self.env
        minCollide = 0
        while len(newEnv) < self.size:
            minCollide = min(getGenes)
            minIndex = getGenes.index(min(getGenes))
            newEnv.append(self.env[minIndex])
            getGenes.remove(minCollide)
            self.env.remove(self.env[minIndex])
        return newEnv
    
    def solve(self):
        self.initialGeneration()
        for gene in self.env:
            if self.isSolution(gene):
                return gene
        count = 0
        while True:
            self.crossMutate()
            self.env = self.geneSelect()
            count +=1
            if self.goalIndex >= 0 :
                return self.goal
            else:
                continue
    
    def printBoard(self,gene):
        board = self.createBoard(self.size)
        self.fillBoard(board,gene)
        for i in range(self.size):
            print(board[i])


n = int(input(" Enter a number greater than 3 => "))
chess = GeneticChess(n)
result  =  chess.solve()
print("solution is => ", result)
chess.printBoard(result)
