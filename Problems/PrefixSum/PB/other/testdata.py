import random

def generate_unique_numbers():
    num_count = random.randint(820, 840)
    unique_numbers = random.sample(range(-1000, 1001), num_count)
    return unique_numbers

print(random.randint(-100000, 100000))
unique_numbers = generate_unique_numbers()
for j in unique_numbers:
    print(j, end=" ")
print()
