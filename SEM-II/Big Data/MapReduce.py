# Sample input data
from collections import defaultdict
input_data = [
"Hello world",
"Python is great",
"Hello Python",
"Big data is the future",
]
# Define the mapper function
def mapper(text):
    word_count=defaultdict(int)
    words=text.split()
    for word in words:
        word_count[word]+=1
    return word_count

# Define the reducer function
def reducer(word_counts):
    final_word_count=defaultdict(int)
    for word_count in word_counts:
        for word,count in word_count.items():
            final_word_count[word]+=count
    return final_word_count

# Map phase
mapped_results=[mapper(text) for text in input_data]

# Reduce phase
reduced_result=reducer(mapped_results)

for word,count in reduced_result.items():
    print(f"{word}:{count}")