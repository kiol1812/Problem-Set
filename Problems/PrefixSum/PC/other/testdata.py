import random

def generate_numbers():
    lower = random.randint(-100000, 100000)
    upper = random.randint(lower, 100000)
    numbers = []
    current_sum = 0
    for _ in range(600):
        min_value = max(-100000, lower - current_sum)
        max_value = min(100000, upper - current_sum)
        num = random.randint(min_value, max_value)
        numbers.append(num)
        current_sum += num
    
    return lower, upper, numbers

l, u, unique_numbers = generate_numbers()
print(l, u)
for j in unique_numbers:
    print(j, end=" ")
print()
