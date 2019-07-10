#faster method which take use fo the elements which are store in the li list
def count_prime_fast(num):
    li=[2]
    x=3
    while x<=num:
        for y in li:
            if x%y==0:
                x+=2
                break
        else :
            li.append(x)
            x+=2
    return len(li)
            
print(count_prime_fast(100000))