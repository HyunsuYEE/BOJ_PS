#10974
def recursion_permutation(list, Len):
    result = []
    if Len == 1:
        for i in list:
            result.append([i])

    elif Len > 1:
        for i in range(len(list)):
            dup_list = [i for i in list]
            keep = list[i]
            dup_list.remove(keep)
            recursion = recursion_permutation(dup_list, Len - 1)
            for p in recursion:
                result.append([keep] + p) # merge them into Ns list
    return result


N = int(input(""))

list = [i + 1 for i in range(N)]

result = recursion_permutation(list, N)
for perm in result:
    for j in range(len(perm)):
        print("{} ".format(perm[j]),end='')
    print("")
