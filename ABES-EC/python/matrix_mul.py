# import numpy as np
# m1 = np.array([[1,4,7],[2,5,8]])
# m2 = np.array([[1,4],[2,5],[3,6]])
# m3 = np.dot(m1,m2) 
# print(m3) 

m1 = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
m2 = [[1, 1, 1, 1],[2,2,2,2],[3,3,3,3]]
result = [[0, 0, 0, 0],[0, 0, 0, 0],[0, 0, 0, 0]]
for i in range(len(m1)):
	for j in range(len(m2[0])):
		for k in range(len(m2)):
			result[i][j] += m1[i][k] * m2[k][j]
for r in result:
	print(r)


# m1 =[[1,4,7],[2,5,8]]
# m2 = [[1,4],[2,5],[3,6]]
# m3 = [[sum(m1 * m2 for m1, m2 in zip(A_row, B_col))
#                         for B_col in zip(*m2)]
#                                 for A_row in m1]
# for r in m3:
#     print (r)

