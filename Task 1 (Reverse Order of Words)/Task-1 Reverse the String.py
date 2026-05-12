# Program to reverse the order of words in a given sentence

# Take input from user
input_string = input("Enter a string: ")

# Split the string into words
words = input_string.split()

# Reverse the order of words
reversed_words = words[::-1]

# Join reversed words into a sentence
output_string = " ".join(reversed_words)

# Display output
print("Reversed string:", output_string)