#TODO don't know yet



#python 2

# import sys 
# arr = map(int, raw_input().split())
# arr.extend(map(int, raw_input().split()))
# arr.extend(map(int, raw_input().split()))
# magic = [[8, 1, 6, 3, 5, 7, 4, 9, 2], [6, 1, 8, 7, 5, 3, 2, 9, 4],
#          [4, 3, 8, 9, 5, 1, 2, 7, 6], [2, 7, 6, 9, 5, 1, 4, 3, 8],
#          [2, 9, 4, 7, 5, 3, 6, 1, 8], [4, 9, 2, 3, 5, 7, 8, 1, 6],
#          [6, 7, 2, 1, 5, 9, 8, 3, 4], [8, 3, 4, 1, 5, 9, 6, 7, 2]]
# mini = 2**64
# for brr in magic:
#     diff = 0
#     for i, j in zip(arr, brr):
#         diff += abs(i - j)
#     mini = min(diff, mini)
# print(mini)



# python3

# import sys
# diffs = []
# s = []
# for s_i in range(3):
#    s_t = [int(s_temp) for s_temp in input().strip().split(' ')]
#    s.append(s_t)

# all_possible = [
#             [[8, 1, 6], [3, 5, 7], [4, 9, 2]],
#             [[6, 1, 8], [7, 5, 3], [2, 9, 4]],
#             [[4, 9, 2], [3, 5, 7], [8, 1, 6]],
#             [[2, 9, 4], [7, 5, 3], [6, 1, 8]], 
#             [[8, 3, 4], [1, 5, 9], [6, 7, 2]],
#             [[4, 3, 8], [9, 5, 1], [2, 7, 6]], 
#             [[6, 7, 2], [1, 5, 9], [8, 3, 4]], 
#             [[2, 7, 6], [9, 5, 1], [4, 3, 8]],]

# #compare s to each in all possible get number of differences for each to diffs
# for possiblity in all_possible:
#     cost = 0
#     for p_row, s_row in list(zip(possiblity,s)):
#         for p_num, s_num in (list(zip(p_row, s_row))):
#             if p_num != s_num:
#                 cost += abs(p_num - s_num)
#     diffs.append(cost)
# print(min(diffs))


#python 3

# import sys
# from math import fabs


# matrix = [[int(x) for x in input().strip().split()],
#           [int(x) for x in input().strip().split()],
#           [int(x) for x in input().strip().split()]]


# allmagic = [[[8,1,6],[3,5,7],[4,9,2]],
#             [[8,3,4],[1,5,9],[6,7,2]],
#             [[4,9,2],[3,5,7],[8,1,6]],
#             [[4,3,8],[9,5,1],[2,7,6]],
#             [[6,7,2],[1,5,9],[8,3,4]],
#             [[6,1,8],[7,5,3],[2,9,4]],
#             [[2,9,4],[7,5,3],[6,1,8]],
#             [[2,7,6],[9,5,1],[4,3,8]]]

# def edit_distance(matrix1, matrix2):
#     dist = 0
#     for i in range(len(matrix1)):
#         for j in range(len(matrix1[i])):
#             dist += abs(matrix1[i][j] - matrix2[i][j])
#     return dist

# dist = min(edit_distance(matrix,magic) for magic in allmagic)
# print(dist)


#python 3
# input_nums = []
# input_nums.extend([int(i) for i in input().split()])
# input_nums.extend([int(i) for i in input().split()])
# input_nums.extend([int(i) for i in input().split()])

# #input_nums[0], input_nums[1], input_nums[2] = [int(i) for i in input().split()]
# #input_nums[3], input_nums[4], input_nums[5] = [int(i) for i in input().split()]
# #input_nums[6], input_nums[7], input_nums[8] = [int(i) for i in input().split()]
# #print(input_nums)

# pos = []
# pos.append([8,1,6,3,5,7,4,9,2])
# pos.append([6,1,8,7,5,3,2,9,4])
# pos.append([4,9,2,3,5,7,8,1,6])
# pos.append([2,9,4,7,5,3,6,1,8])
# pos.append([8,3,4,1,5,9,6,7,2])
# pos.append([4,3,8,9,5,1,2,7,6])
# pos.append([6,7,2,1,5,9,8,3,4])
# pos.append([2,7,6,9,5,1,4,3,8])

# #print(pos)

# mindiff = 10000

# for arr in pos:
#     diff = 0
#     for i in range(9):
#         diff += abs(arr[i] - input_nums[i])
#     if (diff < mindiff):
#         mindiff = diff
        
# print(mindiff)



# python 3
# possibilities = [
#     [[8, 1, 6], [3, 5, 7], [4, 9, 2]],
#     [[6, 1, 8], [7, 5, 3], [2, 9, 4]],
#     [[4, 9, 2], [3, 5, 7], [8, 1, 6]],
#     [[2, 9, 4], [7, 5, 3], [6, 1, 8]],
#     [[8, 3, 4], [1, 5, 9], [6, 7, 2]],
#     [[4, 3, 8], [9, 5, 1], [2, 7, 6]],
#     [[6, 7, 2], [1, 5, 9], [8, 3, 4]],
#     [[2, 7, 6], [9, 5, 1], [4, 3, 8]],
# ]

# s = []
# for i in range(3):
#     s.append([int(x) for x in input().split(' ')])

# min_cost = None
# for p in possibilities:
#     cost = 0
#     for i in range(3):
#         for j in range(3):
#             cost += abs(p[i][j] - s[i][j])
#     if min_cost is None or cost < min_cost:
#         min_cost = cost
# print(min_cost)