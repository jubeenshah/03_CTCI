numRows = 100
def pascalsTriangle(numRows):
    result = [[1]]
    for i in range(1,numRows):
        result = result + [list(map(lambda x,y: x+y, result[-1]+ [0],[0]+ result[-1] ))]
    return result[:numRows]
def draw(n):
    for p in pascalsTriangle(n):
        print(' '.join(map(str,p)).center(n*n)+'\n')
draw(numRows)
