def kangaroo(x1, v1, x2, v2):
    if (v2 > v1 and x2 > x1) or (x2 > x1 and v2 == v1):
        return "NO"

    res = (x1 - x2) % (v2 - v1)
    if res == 0:
        return "YES"
    return "NO"