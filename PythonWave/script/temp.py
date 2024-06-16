def get_middle(word):
    length = len(word)
    middle_index = length // 2
    
    if length % 2 == 1:
        # Odd length
        return word[middle_index]
    else:
        # Even length
        return word[middle_index - 1 : middle_index + 1]