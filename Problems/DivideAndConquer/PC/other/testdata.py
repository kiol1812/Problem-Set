import random

def generate_unique_numbers():
    num_count = random.randint(5, 50)
    print(num_count)
    unique_numbers = random.sample(range(1, 1001), num_count)
    return unique_numbers

for i in range(5):
    unique_numbers = generate_unique_numbers()
    for j in unique_numbers:
        print(j, end=" ")
    print()
