import numpy as np

# 노름을 구하는 함수
def cal_norm(vec1):
    norm_vec = np.sqrt(np.sum(vec1*vec1))
    return norm_vec

# 내적을 구하는 함수
def cal_innerproduct(vec1, vec2):
    innerprod_vecs = np.sum(vec1*vec2)
    return innerprod_vecs

# 해밍 거리를 구하는 함수
def cal_hamming_dist(vec1, vec2):
    Num_vec = len(vec1)
    hamming_dist = 0
    for i in range(Num_vec):
        if vec1[i] != vec2[i]:
            hamming_dist = hamming_dist+1
    return hamming_dist

# 맨하튼 거리를 구하는 함수
def cal_Manhattan_dist(vec1, vec2):
    Manhattan_dist = np.sum(np.abs(vec1-vec2))
    return Manhattan_dist

# 벡터 x, y, z, v, w
x = np.array([1,0,1,0])
y = np.array([0,2,2,0])
z = np.array([1,0,1,2])
v = np.array([1,1,1,1])
w = np.array([2,2,0,1])

# 문제 (a)
print("문제 (a)")
print("Norm of x = ", cal_norm(x))
print("Norm of y = ", cal_norm(y))
print("Norm of z = ", cal_norm(z))
print("\n")

# 문제 (b)
print("문제 (b)")
print("Inner product of x and y = ", cal_innerproduct(x,y))
print("\n")

# 문제 (c)
print("문제 (c)")
print("Inner product of z and x+y = ", cal_innerproduct(z, x+y))
print("\n")

# 문제 (d)
print("문제 (d)")
print("Hamming distance of x and v = ", cal_hamming_dist(x,v))
print("\n")

# 문제 (e)
print("문제 (e)")
print("Manhattan distance of v and w = ", cal_Manhattan_dist(v,w))

