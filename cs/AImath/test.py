import numpy as np

def Gauss_Jordan_method(A):
    (n,m) = A.shape
    A = A.astype(np.float32)
    for i in range(0, min(n,m)):
    # i번째 열에서 절댓값이 최대인 성분의 행 선택
        maxEl = abs(A[i,i])
        maxRow_num = i
        for k in range(i+1, n):
            if abs(A[k,i]) > maxEl:
                maxEl = abs(A[k,i])
                maxRow_num = k
        
        # 현재 i번째 행과 최댓값을 갖는 행을 교환
        for k in range(i, m):
            tmp = A[maxRow_num,k]
            A[maxRow_num,k] = A[i,k]
            A[i,k] = tmp
        
        # 추축성분을 1로 만들기
        piv = A[i,i]
        for k in range(i, m):
            A[i,k] = A[i,k]/piv
        
        # 현재 i번째 열의 i번째 행을 제외한 모두 성분을 으로 만들기
        for k in range(0, n):
            if k != i:
                c = A[k,i]/A[i,i]
                for j in range(i, m):
                    if i == j:
                        A[k,j] = 0
                    else:
                        A[k,j] = A[k,j] - c * A[i,j]
        # 중간 과정 출력
        print(str(i+1)+"번째 반복 ")
        print(A)
    # Ax=b의 해 반환
    sol_x = np.zeros(m-1)
    for i in range(0,m-1):
        sol_x[i] = A[i,m-1]
    return sol_x

# 문제 (a)의 방정식의 해

print("Solution of (a)\n")
A = np.array([[1,2,-1],[2,3,-1],[3,-2,3]])
b = np.array([[6,8,-4]])
augmented_A = np.hstack((A,b.T))
sol = np.round(Gauss_Jordan_method(augmented_A)).astype(np.int64)

print("x_1 = ", sol[0])
print("x_2 = ", sol[1])
print("x_3 = ", sol[2])
print("\n")

# 문제 (b)의 방정식의 해

print("Solution of (b)\n")
A = np.array([[1,1,2],[2,6,4],[3,1,3]])
b = np.array([[9,26,14]])
augmented_A = np.hstack((A,b.T))
sol = np.round(Gauss_Jordan_method(augmented_A)).astype(np.int64)

print("x_1 = ", sol[0])
print("x_2 = ", sol[1])
print("x_3 = ", sol[2])
print("\n")


